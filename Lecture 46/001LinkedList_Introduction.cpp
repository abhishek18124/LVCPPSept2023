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

// ListNode* insertAtHead(ListNode* head, int val) {

// 	ListNode* n = new ListNode(val);
// 	n->next = head;
// 	head = n;

// 	return head;

// }

void printLinkedList(ListNode* head) {
	while (head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
}

int main() {

	// ListNode* n = new ListNode(10);

	// cout << n->val << endl;

	// if (n->next == NULL) {
	// 	cout << "there is no next node" << endl;
	// }

	ListNode* head = NULL; // LinkedList is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	// head = insertAtHead(head, 50);
	// head = insertAtHead(head, 40);
	// head = insertAtHead(head, 30);
	// head = insertAtHead(head, 20);
	// head = insertAtHead(head, 10);

	printLinkedList(head);
	printLinkedList(head);

	return 0;
}