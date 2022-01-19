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

void postOrderCal(node* root, vector<int>& postorder){
	if(root == NULL){
		return;
	}
	postOrderCal(root -> left, postorder);
	postOrderCal(root -> right, postorder);
	postorder.push_back(root -> key);
}



int main(){
	node* root = new node(10);
	root -> left = new node(20);
	root -> right = new node(30);
	vector<int> postorder;
	postOrderCal(root, postorder);
	for(auto i: postorder){
		cout << i << " ";
	}
	cout << "\n";
}