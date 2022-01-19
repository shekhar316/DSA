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

void preOrderCal(node* root, vector<int>& preorder){
	if(root == NULL){
		return;
	}
	preorder.push_back(root -> key);
	preOrderCal(root -> left, preorder);
	preOrderCal(root -> right, preorder);
}



int main(){
	node* root = new node(10);
	root -> left = new node(20);
	root -> right = new node(30);
	vector<int> preorder;
	preOrderCal(root, preorder);
	for(auto i: preorder){
		cout << i << " ";
	}
	cout << "\n";
}