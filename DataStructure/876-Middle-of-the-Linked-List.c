/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *tmp = head;
    int size = 0;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        size = size + 1;
    }
    tmp = head;
    int mid = size / 2;
    int count = 0;
    while (count < mid)
    {
        tmp = tmp->next;
        count += 1;
    }
    return tmp;
}