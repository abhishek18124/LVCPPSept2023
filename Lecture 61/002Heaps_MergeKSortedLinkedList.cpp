/*

    Given k sorted linked list, merge them and print the sorted output.

    k = 3
    Input : 1->3->5
            2->4->6 
            0->8->7
        
    Output: 0->1->2->3->4->5->6->7->8

*/

#include<iostream>
#include<queue>
#include<vector>

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

    while(head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    
    cout << endl;

}

int main() {

    ListNode* head1 = NULL; 

    insertAtHead(head1, 5);
    insertAtHead(head1, 3);
    insertAtHead(head1, 1);

    printLinkedList(head1);

    ListNode* head2 = NULL; 

    insertAtHead(head2, 6);
    insertAtHead(head2, 4);
    insertAtHead(head2, 2);

    printLinkedList(head2);

    ListNode* head3 = NULL; 

    insertAtHead(head3, 7);
    insertAtHead(head3, 8);
    insertAtHead(head3, 0);

    printLinkedList(head3);

    vector<ListNode*> v = {head1, head2, head3};

    // todo ...

    printLinkedList(head);

    return 0;
}
