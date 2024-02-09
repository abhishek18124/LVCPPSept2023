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

// time : O(m+n)
// space: O(1)

ListNode* mergeSortedLinkedList(ListNode* head1, ListNode* head2) {

	ListNode* dummy = new ListNode(0); // we are using 0 as a dummy value
	ListNode* temp = dummy;

	while (head1 != NULL and head2 != NULL) {

		if (head1->val < head2->val) {
			temp->next = head1;
			temp = temp->next;
			head1 = head1->next;
		} else {
			temp->next = head2;
			temp = temp->next;
			head2 = head2->next;
		}

	}

	if (head1 != NULL) {
		temp->next = head1;
	}

	if (head2 != NULL) {
		temp->next = head2;
	}

	return dummy->next;



}

// time : O(m+n)
// space: O(m+n) due to the function call stack

ListNode* mergeSortedLinkedListRecursive(ListNode* head1, ListNode* head2) {

	// base case

	if (head1 == NULL) {
		// 1st LinkedList is empty
		return head2;
	}

	if (head2 == NULL) {
		// 2nd LinkedList is empty
		return head1;
	}

	// recursive case

	if (head1->val < head2->val) {

		// head1 will be the final head of the LinkedList

		ListNode* head = head1;
		ListNode* headFromMyFriend = mergeSortedLinkedListRecursive(head1->next, head2);
		head->next = headFromMyFriend;
		return head;

	} else {

		// head2 will be the final head of the LinkedList

		ListNode* head = head2;
		ListNode* headFromMyFriend = mergeSortedLinkedListRecursive(head1, head2->next);
		head->next = headFromMyFriend;
		return head;

	}

}


// ListNode* mergeSortedLinkedListRecursive(ListNode* head1, ListNode* head2) {

// 	// base case

// 	// recursive case

// 	ListNode* head;

// 	if(head1->val < head2->val) {

// 		// head1 will be the final head of the LinkedList

// 		head = head1;
// 		head->next = mergeSortedLinkedListRecursive(head1->next, head2);

// 	} else {

// 		// head2 will be the final head of the LinkedList

// 		head = head2;
// 		head->next = mergeSortedLinkedListRecursive(head1, head2->next);

// 	}

// 	return head;

// }

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

	// ListNode* head = mergeSortedLinkedList(head1, head2);
	ListNode* head = mergeSortedLinkedListRecursive(head1, head2);

	printLinkedList(head);

	return 0;
}