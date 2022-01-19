#include <bits/stdc++.h>
using namespace std;

struct node{
	int key;
	struct node* left;
	struct node* right;

	node(int k){
		key = k;
		left = right = NULL;
	}
};

int minDepth(node* root) {
    if(root == NULL){
        return 0;
    }
    if(root -> left == NULL && root -> right == NULL){
        return 1;
    }
    if(root -> left == NULL){
        return 1 + minDepth(root -> right);
    }
    if(root -> right == NULL){
        return 1 + minDepth(root -> left);
    }
    return 1 + min(minDepth(root -> right), minDepth(root -> left));
}

int main(){
	node* root = new node(10);
	root -> left = new node(20);
	root -> right = new node(30);
	root -> left -> left = new node(40);
	root -> right -> left = new node(50);
	root -> right -> left -> left = new node(60);
	cout << minDepth(root) << "\n";
	return 0;
}









