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

ListNode* getNode(ListNode* head, int j) {

	// finds the node in the LinkedList at the jth index

	int k = 0;
	while (head != NULL and k < j) {
		head = head->next;
		k++;
	}

	// head ptr is now pointing to the node at the jth index of the LinkedList
	return head;
}

// time : O(n), steps can be optimised, try to find prev and cur in a single pass [hw]

void deleteAtIndex(ListNode*& head, int i) {

	// head == NULL is automatically handled

	// deletes the node at the ith index of the LinkedList

	if (i == 0) {
		// deleting the node at the ith index is equivalent to deleting at the head of the LinkedList
		deleteAtHead(head);
		return;
	}

	// i >= 1

	ListNode* cur = getNode(head, i); // linear
	if (cur == NULL) {
		// index i >= length of the LinkedList
		return;
	}

	// i is valid index (1<=i<=n-1), prev will always exist

	ListNode* prev = getNode(head, i - 1); // linear
	prev->next = cur->next;
	delete cur;

}


int main() {

	ListNode* head = NULL; // initially, linkedList is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	deleteAtIndex(head, 2);

	printLinkedList(head);

	return 0;
}