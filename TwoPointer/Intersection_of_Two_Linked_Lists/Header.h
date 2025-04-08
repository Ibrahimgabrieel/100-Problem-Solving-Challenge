#include <iostream>
using namespace std;

// Basic structure for a node in the linked list
struct ListNode {
    int val;        // value stored in the node
    ListNode* next; // pointer to next node
    ListNode(int x) : val(x), next(NULL) {} // constructor
};

// Main solution class
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        // Get lengths of both lists
        int lenA = getLength(headA);
        int lenB = getLength(headB);

        // Move headA pointer until both lists have same length remaining
        while (lenA > lenB) {
            headA = headA->next;
            lenA--;
        }

        // Move headB pointer until both lists have same length remaining
        while (lenB > lenA) {
            headB = headB->next;
            lenB--;
        }

        // Move both pointers until intersection is found
        while (lenA && lenB) {
            if (headA == headB) {
                return headA;  // Intersection found
            }
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;  // No intersection found
    }

private:
    // Helper function to get length of linked list
    int getLength(ListNode* head) {
        int length = 0;
        while (head) {
            length++;
            head = head->next;
        }
        return length;
    }
};

// Helper function to print a linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

