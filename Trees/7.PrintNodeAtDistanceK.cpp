#include <bits/stdc++.h>
using namespace std;

struct node  
{ 
	int key; 
  	struct node *left; 
  	struct Node *right; 
  	node(int k){
      	key = k;
      	left = right = NULL;
  	}
};

void printNodeAtDistanceK(Node *root, int k){
    if(root == NULL){
		return;
	}
    if(k == 0){
		cout << root -> key << " ";
	}else{
    	printNodeAtDistanceK(root -> left, k - 1);
    	printNodeAtDistanceK(root -> right, k - 1);
    }
}  

int main() {
	int k;
	node *root=new node(10);
	root -> left = new node(20);
	root -> right = new node(30);
	root -> left -> left = new node(40);
	root -> left -> right = new node(50);
	root -> right -> right = new node(70);
	root -> right -> right -> right = new node(80);
	cout << "Enter the value of k = ";
	cin >> k;
	cout << "Root at distance k is: ";
	printKDist(root,k);
}
















