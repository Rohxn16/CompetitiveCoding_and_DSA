#include <iostream>
using namespace std;

class Node{
public:
	int val;
	Node* left;
	Node* right;

	Node(int val){
		this->val = val;
		this->left = NULL;
		this->right = NULL;
	}
}

Node* buildTree(){
	cout << "Enter the value: "<<endl;
	int data;
	cin >> data;

	Node* root = new Node(data);

	if(data == -1) return NULL;

	cout << "Enter elements for left insertion"<<endl;
	root->left = buildTree(root->left);
	cout <<"Enter elements for right insertion"<<endl;
	root->right = buildTree(root->right);

	return root;
}

int main(int argc, char const *argv[])
{
	
	Node* root = NULL;
	root = buildTree(root);	
	return 0;
}