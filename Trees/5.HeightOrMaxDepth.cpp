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

int height(node* root){
	if(root == NULL){
		return 0;
	}else{
		return (1 + max(height(root -> left), height(root -> right)));
	}
}

int main(){
	node* root = new node(10);
	root -> left = new node(20);
	root -> right = new node(30);
	root -> left -> left = new node(40);
	cout << height(root) << "\n";
	return 0;
}