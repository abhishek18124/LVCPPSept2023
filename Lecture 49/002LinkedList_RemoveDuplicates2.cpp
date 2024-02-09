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
	while (head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
}

ListNode* removeDuplicates(ListNode* head) {

	// base case

	if (head == NULL) {
		// LinkedList is empty
		return head;
	}

	if (head->next == NULL) {
		// LinkedList has one node
		return head;
	}

	// recursive case

	// LinkedList has >=2 nodes

	if (head->val != head->next->val) {

		// head of the org. LinkedList will be the head of the o/p LinkedList

		// recursively, remove duplicates from the subList that starts from the node which comes after the head node

		ListNode* headFromMyFriend = removeDuplicates(head->next);
		head->next = headFromMyFriend;
		return head;

	} else {

		// head of the org. LinkedList is repeating

		while (head->next != NULL and head->val == head->next->val) {
			head = head->next;
		}

		ListNode* headFromMyFriend = removeDuplicates(head->next);
		return headFromMyFriend;

	}

}

int main() {

	ListNode* head = NULL;

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 20);
	insertAtHead(head, 10);
	insertAtHead(head, 10);
	insertAtHead(head, 10);

	printLinkedList(head);

	head = removeDuplicates(head);

	printLinkedList(head);

	return 0;
}