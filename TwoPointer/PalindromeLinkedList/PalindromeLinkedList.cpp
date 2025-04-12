#include "Header.h"
int main() {
    Solution solution;

    // Test Case 1: Palindrome [1,2,2,1]
    int arr1[] = { 1, 2, 2, 1 };
    ListNode* test1 = createLinkedList(arr1, 4);
    cout << "Test Case 1 (1->2->2->1): " << (solution.isPalindrome(test1) ? "Is Palindrome" : "Not Palindrome") << endl;
    deleteLinkedList(test1);

    // Test Case 2: Not a Palindrome [1,2,3]
    int arr2[] = { 1, 2, 3 };
    ListNode* test2 = createLinkedList(arr2, 3);
    cout << "Test Case 2 (1->2->3): " << (solution.isPalindrome(test2) ? "Is Palindrome" : "Not Palindrome") << endl;
    deleteLinkedList(test2);

    // Test Case 3: Single element [1]
    int arr3[] = { 1 };
    ListNode* test3 = createLinkedList(arr3, 1);
    cout << "Test Case 3 (1): " << (solution.isPalindrome(test3) ? "Is Palindrome" : "Not Palindrome") << endl;
    deleteLinkedList(test3);

    // Test Case 4: Palindrome with odd length [1,2,3,2,1]
    int arr4[] = { 1, 2, 3, 2, 1 };
    ListNode* test4 = createLinkedList(arr4, 5);
    cout << "Test Case 4 (1->2->3->2->1): " << (solution.isPalindrome(test4) ? "Is Palindrome" : "Not Palindrome") << endl;
    deleteLinkedList(test4);

    return 0;
}