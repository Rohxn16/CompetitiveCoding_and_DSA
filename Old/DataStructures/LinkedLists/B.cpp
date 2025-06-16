#include <iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;

	Node(int data){
		this->data = data;
		this->next = NULL;
	}
}

Node* reverseLinkedList(Node* head){
	
	if(head == NULL || head->next == NULL)return head;


	Node* prev = NULL;
	Node* curr = head;
	Node* next = head->next;

	while(next != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	return curr;
}

int main(int argc, char const *argv[])
{
	
	return 0;
}