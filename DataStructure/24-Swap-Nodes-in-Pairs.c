/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode *dummy = malloc(sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode *previous = dummy;
    struct ListNode *current = head;

    while(current != NULL && current->next != NULL)
    {
        struct ListNode *npn = current->next->next;
        struct ListNode *second = current->next;

        second->next = current;
        current->next = npn;
        previous->next = second;
        previous = current;
        current = npn;

    }
    return dummy->next;

}