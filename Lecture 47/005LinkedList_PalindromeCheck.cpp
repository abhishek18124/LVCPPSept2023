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

ListNode* computeMidPoint(ListNode* head) {

	if (head == NULL) {
		// LinkedList is empty
		return NULL;
	}

	ListNode* slow = head;
	ListNode* fast = head->next;

	while (fast != NULL and fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}

	// slow is pointing to the midPoint of the LinkedList i.e. slow pointer has the address of the midPoint node
	return slow;

}


ListNode* reverseIterative(ListNode* head) {

	ListNode* prev = NULL;
	ListNode* cur = head;

	while (cur != NULL) {
		ListNode* temp = cur->next;
		cur->next = prev;
		prev = cur;
		cur = temp;
	}

	return prev;

}

// time : 3n/2 steps ~ O(n)
// space : O(1)

bool isPalindrome(ListNode* head) {

	// 1. divide the LinkedList around the midPoint
	ListNode* midPoint = computeMidPoint(head);
	ListNode* head2 = midPoint->next;
	midPoint->next = NULL;

	// 2. reverse the second subList i.e. head2
	head2 = reverseIterative(head2);

	while (head2 != NULL) {
		if (head->val != head2->val) {
			// given LinkedList is not a palindrome
			return false;
		}
		head = head->next;
		head2 = head2->next;
	}

	// given LinkedList is a palindrome
	return true;
}

int main() {

	ListNode* head = NULL;

	insertAtHead(head, 10);
	insertAtHead(head, 20);
	insertAtHead(head, 30);
	insertAtHead(head, 50);
	insertAtHead(head, 10);

	printLinkedList(head);

	isPalindrome(head) ? cout << "palindrome" << endl : cout << "not a palindrome" << endl;

	return 0;
}