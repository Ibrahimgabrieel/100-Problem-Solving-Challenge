#include <iostream>

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }

        ListNode* newHead = head->next;
        ListNode* pickupPtr = head;
        ListNode* prev = nullptr;

        while (pickupPtr != nullptr && pickupPtr->next != nullptr) {
            ListNode* nextPairStart = pickupPtr->next->next;
            ListNode* second = pickupPtr->next;

            second->next = pickupPtr;
            pickupPtr->next = nextPairStart;

            if (prev != nullptr) {
                prev->next = second;
            }

            prev = pickupPtr;
            pickupPtr = nextPairStart;
        }

        return newHead;
    }
};

// Helper function to create a linked list
ListNode* createLinkedList(int arr[], int n) {
    if (n == 0) return nullptr;

    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;

    for (int i = 1; i < n; i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }

    return head;
}

// Helper function to print the linked list
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        std::cout << current->val << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

// Helper function to clean up memory
void deleteList(ListNode* head) {
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // Test case 1: [1,2,3,4]
    int arr1[] = { 1, 2, 3, 4 };
    ListNode* head1 = createLinkedList(arr1, 4);

    std::cout << "Original List 1: ";
    printList(head1);

    Solution solution;
    ListNode* result1 = solution.swapPairs(head1);

    std::cout << "After swapping pairs: ";
    printList(result1);

    // Clean up memory
    deleteList(result1);

    // Test case 2: [1,2,3]
    int arr2[] = { 1, 2, 3 };
    ListNode* head2 = createLinkedList(arr2, 3);

    std::cout << "\nOriginal List 2: ";
    printList(head2);

    ListNode* result2 = solution.swapPairs(head2);

    std::cout << "After swapping pairs: ";
    printList(result2);

    // Clean up memory
    deleteList(result2);

    return 0;
}