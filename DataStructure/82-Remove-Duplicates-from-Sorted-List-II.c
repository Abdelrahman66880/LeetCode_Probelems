/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *dummy = malloc(sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode *perv = dummy;
    struct ListNode *tmp = head;

    while (tmp != NULL && tmp->next != NULL)
    {
        while (tmp->next != NULL && tmp->next->val == perv->next->val)
        {
            tmp = tmp->next;
        }
        if (perv->next != tmp)
        {
            perv->next = tmp->next;
        }else{
            perv = perv->next;
        }
        tmp = tmp->next;
    }
    return dummy->next;
}