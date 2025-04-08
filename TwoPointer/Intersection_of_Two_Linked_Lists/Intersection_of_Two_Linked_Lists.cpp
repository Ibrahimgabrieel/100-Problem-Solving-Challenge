#include "Header.h"


int main() {
    // Create test case where lists intersect

    // Create the intersection part first
    ListNode* intersect = new ListNode(8);
    intersect->next = new ListNode(4);
    intersect->next->next = new ListNode(5);

    // Create first list: 4->1->8->4->5
    ListNode* headA = new ListNode(4);
    headA->next = new ListNode(1);
    headA->next->next = intersect;  // Connect to intersection

    // Create second list: 5->6->1->8->4->5
    ListNode* headB = new ListNode(5);
    headB->next = new ListNode(6);
    headB->next->next = new ListNode(1);
    headB->next->next->next = intersect;  // Connect to intersection

    // Print both lists
    cout << "List A: ";
    printList(headA);
    cout << "List B: ";
    printList(headB);

    // Test the solution
    Solution solution;
    ListNode* result = solution.getIntersectionNode(headA, headB);

    // Print result
    if (result) {
        cout << "Intersection found at node with value: " << result->val << endl;
    }
    else {
        cout << "No intersection found" << endl;
    }

    // Create test case where lists don't intersect
    ListNode* headC = new ListNode(1);
    headC->next = new ListNode(2);
    headC->next->next = new ListNode(3);

    ListNode* headD = new ListNode(4);
    headD->next = new ListNode(5);
    headD->next->next = new ListNode(6);

    cout << "\nTest case 2 (No intersection):" << endl;
    cout << "List C: ";
    printList(headC);
    cout << "List D: ";
    printList(headD);

    result = solution.getIntersectionNode(headC, headD);
    if (result) {
        cout << "Intersection found at node with value: " << result->val << endl;
    }
    else {
        cout << "No intersection found" << endl;
    }

    // Clean up memory (delete all nodes)
    // First list cleanup
    delete intersect->next->next;
    delete intersect->next;
    delete intersect;
    delete headA->next;
    delete headA;
    delete headB->next->next;
    delete headB->next;
    delete headB;

    // Second list cleanup
    delete headC->next->next;
    delete headC->next;
    delete headC;
    delete headD->next->next;
    delete headD->next;
    delete headD;

    return 0;
}