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

void levelOrderCal(node* root, vector<int>& levelorder){
	if(root == NULL){
		return;
	}
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node* temp = q.front();
		levelorder.push_back(temp -> key);
		q.pop();
		if(temp -> left != NULL){
			q.push(temp -> left);
		}
		if(temp -> right != NULL){
			q.push(temp -> right);
		}
	}
}



int main(){
	node* root = new node(10);
	root -> left = new node(20);
	root -> right = new node(30);
	vector<int> levelorder;
	levelOrderCal(root, levelorder);
	for(auto i: levelorder){
		cout << i << " ";
	}
	cout << "\n";
}