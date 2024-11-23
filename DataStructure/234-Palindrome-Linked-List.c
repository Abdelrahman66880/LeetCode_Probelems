/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode* current = head;
    struct ListNode* prev = NULL;
    // struct ListNode* following = NULL;

    struct ListNode* reversedHead = NULL;
    while (current != NULL) {
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = current->val;
        newNode->next = prev;
        prev = newNode;
        current = current->next;
    }
    reversedHead = prev;

    struct ListNode* tmp1 = head;
    struct ListNode* tmp2 = reversedHead;

    while (tmp1 != NULL && tmp2 != NULL) {
        if (tmp1->val != tmp2->val) {
            return false;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    // If we reach here, the list is a palindrome
    return true;
}
