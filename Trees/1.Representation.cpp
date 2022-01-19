#include <bits/stdc++.h>
using namespace std;

struct node{
	int key;
	node* left;
	node* right;
	
	node(int k){
		key = k;
		left = right = NULL;
		cout << "New node created with key = " << k << ".\n";
	}
};

int main(){
	node* root = new node(10);
	root -> left = new node(5);
	root -> right = new node(20);
	root -> left -> left = new node(2);
	return 0;
}