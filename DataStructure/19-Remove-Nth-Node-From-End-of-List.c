/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *tmp = head;
    int size = 0;

    while (tmp != NULL) {
        tmp = tmp->next;
        size += 1;
    }

    if (n == size) {
        struct ListNode *newHead = head->next;
        free(head);
        return newHead;
    }

    tmp = head;
    int count = 1;
    int position = size - n;

    while (tmp != NULL && count < position) {
        tmp = tmp->next;
        count += 1;
    }

    if (tmp != NULL && tmp->next != NULL) {
        struct ListNode *nodeToDelete = tmp->next;
        tmp->next = tmp->next->next;
        free(nodeToDelete);
    }

    return head;
}
