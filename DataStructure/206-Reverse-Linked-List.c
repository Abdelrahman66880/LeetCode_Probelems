/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* previous = NULL;
    struct ListNode* following = NULL;
    struct ListNode* current = head;

    while (current != NULL) {
        following = current->next;
        current->next = previous;
        previous = current; 
        current = following;
    }

    return previous;
}
