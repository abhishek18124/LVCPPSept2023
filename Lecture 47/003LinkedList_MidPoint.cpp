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

	while (head) { // head != NULL
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;

}

// time : n/2 steps ~ O(n)
// space: O(1)

ListNode* computeMidPoint(ListNode* head) {

	if (head == NULL) {
		// LinkedList is empty
		return NULL;
	}

	// ListNode* slow = head;
	// ListNode* fast = head->next;

	ListNode* slow = head;
	ListNode* fast = head;

	while (fast != NULL and fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}

	// slow is pointing to the midPoint of the LinkedList i.e. slow pointer has the address of the midPoint node
	return slow;

}

int main() {

	ListNode* head = NULL;

	insertAtHead(head, 60);
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	ListNode* midPoint = computeMidPoint(head);

	if (midPoint != NULL) {
		cout << midPoint->val << endl;
	} else {
		cout << "LinkedList is empty" << endl;
	}

	return 0;
}