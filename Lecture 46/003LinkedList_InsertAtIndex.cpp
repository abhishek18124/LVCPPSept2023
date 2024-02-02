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

	while (head) { // head != NULL
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;

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

// time : O(n)

void insertAtIndex(ListNode*& head, int i, int val) {

	if (i == 0) {
		// inserting a node at the 0th index is equivalent to inserting a node at the head of the LinkedList
		insertAtHead(head, val);
		return;
	}

	// insert a new node with the given val at the ith index of the LinkedList

	ListNode* n = new ListNode(val); // const
	ListNode* prev = getNode(head, i - 1); // linear
	if (prev == NULL) {
		// i is greater than length of the LinkedList, and due to this prev does not exist
		return;
	}
	n->next = prev->next; // const
	prev->next = n; // const

}

int main() {

	ListNode* head = NULL; // initially, linkedList is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	insertAtIndex(head, 0, 25);

	printLinkedList(head);

	return 0;
}