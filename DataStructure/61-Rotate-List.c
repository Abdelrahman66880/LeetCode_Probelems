/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (head == NULL || head->next == NULL || k == 0) {
        return head;
    }

    //Calculate the length of the list
    struct ListNode *tail = head;
    int length = 1;
    while (tail->next != NULL) {
        tail = tail->next;
        length++;
    }

    //Calculate effective rotations
    k = k % length;
    if (k == 0) {
        return head;
    }

    struct ListNode *new_tail = head;
    for (int i = 1; i < length - k; i++) {
        new_tail = new_tail->next;
    }

    
    struct ListNode *new_head = new_tail->next;
    new_tail->next = NULL;
    tail->next = head;

    return new_head;
}
