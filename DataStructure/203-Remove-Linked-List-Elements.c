/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {

    while(head != NULL && head->val == val)
    {
        struct ListNode *todelet = head;
        head = head->next;
        free(todelet);
    }

    struct ListNode *tmp = head;
    while(tmp != NULL && tmp->next != NULL)
    {
        if (tmp->next->val == val)
        {
            struct ListNode *todelet = tmp->next;
            tmp->next = tmp->next->next;
            free(todelet);
        } else{
            tmp = tmp->next;
        }
    }
    return head;
}