/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *add_to_node(struct ListNode *head, int val){
    struct ListNode *newNode = malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    newNode->next = head;
    head = newNode;
    return head;
}


// struct ListNode create(struct ListNode *head){

// }

struct ListNode *reverse(struct ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    struct ListNode *current = head;
    struct ListNode *next = head->next;
    head->next = NULL;
    
    while (next != NULL)
    {
        current = next;
        next = next->next;
        current->next = head;
        head = current;
    }
    return head;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    l1 = reverse(l1);
    l2 = reverse(l2);

    // if (l1->val == 0)
    // {
    //     return l1;
    // }
    // if (l2->val == 0)
    // {
    //     return l2;
    // }

    struct ListNode *ptr1 = l1;
    struct ListNode *ptr2 = l2;
    struct listNode *head = NULL;
    int carry = 0;
    int sum;

    while (ptr1 != NULL || ptr2 != NULL)
    {
        sum = 0;
        if (ptr1)
        {
            sum += ptr1->val;
        }
        if (ptr2)
        {
            sum += ptr2->val;
        }
        sum += carry;
        carry = sum / 10;
        sum = sum % 10;

        head = add_to_node(head, sum);
        if (ptr1)
        {
            ptr1 = ptr1->next;
        }
        if (ptr2)
        {
            ptr2 = ptr2->next;
        }
    }
    if (carry)
    {
        head = add_to_node(head, carry);
    }
    return head;

}