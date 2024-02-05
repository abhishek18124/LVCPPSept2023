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

// time : n steps ~ O(n)
// space: O(1)

ListNode* findkthLastNode(ListNode* head, int k) {

	// 1. move the fast pointer k steps forward

	ListNode* fast = head;

	while (k--) {
		fast = fast->next;
	}

	ListNode* slow = head;

	while (fast != NULL) {
		slow = slow->next;
		fast = fast->next;
	}

	// slow pointer is pointing to the kth last node of the LinkedList
	return slow;

}

int main() {

	ListNode* head = NULL;

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	int k = 3; // assume k <= n

	ListNode* kthLastNode = findkthLastNode(head, k);
	cout << kthLastNode->val << endl;

	return 0;
}