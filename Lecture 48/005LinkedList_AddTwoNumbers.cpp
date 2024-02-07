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
	while(head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
}

ListNode* sumOfLinkedList(ListNode* head1, ListNode* head2) {
	// todo ...
}

int main() {

	ListNode* head1 = NULL;

	insertAtHead(head1, 1);
	insertAtHead(head1, 2);
	insertAtHead(head1, 3);

	printLinkedList(head1);

	ListNode* head2 = NULL;

	insertAtHead(head2, 4);
	insertAtHead(head2, 5);
	insertAtHead(head2, 6);

	printLinkedList(head2);

	ListNode* head = sumOfLinkedList(head1, head2);

	printLinkedList(head);

	return 0;
}