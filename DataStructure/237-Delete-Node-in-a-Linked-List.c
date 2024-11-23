/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode *todelete = node->next;
    node->val = node->next->val;
    node->next = node->next->next;
    free(todelete);
}