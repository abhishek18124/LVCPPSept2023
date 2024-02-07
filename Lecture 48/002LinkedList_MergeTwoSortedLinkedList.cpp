#include<iostream>

using namespace std;

class ListNode {
public:

	int val;
	ListNode* next;

	ListNode(int val) {
		this->val = val;
		this->next = NULL;
	}

};

void insertAtHead(ListNode*& head, int val) {

	ListNode* n = new ListNode(val);
	n->next = head; 
	head = n;

}


void printLinkedList(ListNode* head) {
	
	while(head) { // head != NULL
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;
}

int main() {

	ListNode* head1 = NULL;

	insertAtHead(head1, 50);
	insertAtHead(head1, 30);
	insertAtHead(head1, 10);

	printLinkedList(head1);

	ListNode* head2 = NULL;

	insertAtHead(head2, 60);
	insertAtHead(head2, 40);
	insertAtHead(head2, 20);

	printLinkedList(head2);

	// todo ...

	return 0;
}