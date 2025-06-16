#include <iostream>
using namespace std;

class Node{
public:
	int data;
	Node *next;

	Node(int data){
		this->data = data;
		this->next = NULL;
	}
};

void insertAtHead(Node* &head, int d){
	Node* temp = new Node(d);
	temp->next = head;
	head = temp;
}

void insertAtTail(Node* &tail, int d){
	Node* temp = new Node(d);
	tail->next = temp;
	tail = tail->next;
}

void insertAtPosition(Node* &head,int pos, int d){
	Node* node = new Node(d);
	Node* temp = head;
	for(int i = 1; i < pos; i++){
		temp = temp -> next;
	}
	node->next = temp->next;
	temp->next = node;
}

void deleteHead(Node* &head){
	head = head->next;
}

void deletePos(Node* &head, int pos){

	Node* temp = head;
	for(int i = 1; i < pos-1; i++){
		temp = temp -> next;
	}
	temp->next = temp->next->next;
}

// printing a linked list
void printLinkedList(Node* &head){
	Node* temp = head;
	while(temp != NULL){
		cout << temp->data <<"->";
		temp = temp->next;
	}
	cout <<"NULL\n";
}

int main(){
	Node* node1 = new Node(10);
	insertAtHead(node1,12);
	insertAtHead(node1,15);
	insertAtPosition(node1,1,22);
	deletePos(node1,3);
	printLinkedList(node1);
}