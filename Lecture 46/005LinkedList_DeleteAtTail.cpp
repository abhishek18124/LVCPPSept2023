#include<iostream>

using namespace std;

class ListNode {

public :

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

	while (head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;
}

void deleteAtHead(ListNode*& head) {

	if (!head) { // head == NULL
		// linkedList is empty
		return;
	}

	ListNode* temp = head;
	head = head->next;
	delete temp;
}

// time : O(n)

void deleteAtTail(ListNode*& head) {

	if (head == NULL) {
		// LinkedList is empty
		return;
	}

	// LinkedList is non-empty

	if (head->next == NULL) {
		// LinkedList has one node
		deleteAtHead(head);
		return;
	}

	// LinkedList has >= 2 nodes

	ListNode* prev = NULL;
	ListNode* cur = head;

	while (cur->next != NULL) {
		prev = cur;
		cur = cur->next;
	}

	prev->next = NULL;
	delete cur;

}

int main() {

	ListNode* head = NULL; // linked list is initially empty

	// insertAtHead(head, 50);
	// insertAtHead(head, 40);
	// insertAtHead(head, 30);
	// insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	deleteAtTail(head);

	printLinkedList(head);

	return 0;
}