/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x) {
    if (head == NULL)
    {
        return NULL;
    }
    struct ListNode *right = malloc(sizeof(struct ListNode));
    struct ListNode *left = malloc(sizeof(struct ListNode));

    struct ListNode *right_tmp = right;
    struct ListNode *left_tmp = left;


    while(head!=NULL)
    {
        if (head->val < x)
        {
            left_tmp->next = head;
            left_tmp = left_tmp->next;
        }else{
            right_tmp->next = head;
            right_tmp = right_tmp->next;
        }
        head = head->next;
    }
    right_tmp->next = NULL;
    left_tmp->next = right->next;
    struct ListNode *newHead = left->next;
    free(left);
    free(right);
    return newHead;
}