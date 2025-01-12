/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* split(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return NULL;
    }
    struct ListNode* fast = head;
    struct ListNode* slow = head;

    while (fast->next != NULL && fast->next->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }

    struct ListNode* mid = slow->next;
    slow->next = NULL;
    return mid;
}

struct ListNode* mergsorting(struct ListNode* head, struct ListNode* mid) {
    if (head == NULL) {
        return mid;
    }
    if (mid == NULL) {
        return head;
    }

    if (head->val <= mid->val) {
        head->next = mergsorting(head->next, mid);
        return head;
    } else {
        mid->next = mergsorting(head, mid->next);
        return mid;
    }
}

struct ListNode* sortList(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct ListNode* mid = split(head);
    head = sortList(head);
    mid = sortList(mid);

    head = mergsorting(head, mid);

    return head;
}
