#include <bits/stdc++.h>
using namespace std;

struct node{
	int key;
	node* left;
	node* right;

	node(int k){
		key = k;
		left = right = NULL;
	}
};

void inOrderCal(node* root, vector<int>& inorder){
	if(root == NULL){
		return;
	}
	inOrderCal(root -> left, inorder);
	inorder.push_back(root -> key);
	inOrderCal(root -> right, inorder);
}



int main(){
	node* root = new node(10);
	root -> left = new node(20);
	root -> right = new node(30);
	vector<int> inorder;
	inOrderCal(root, inorder);
	for(auto i: inorder){
		cout << i << " ";
	}
	cout << "\n";
}