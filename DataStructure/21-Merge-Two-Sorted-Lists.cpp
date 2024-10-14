class Solution {
public:
\tListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
  {
\t\t// if list1 happen to be NULL
\t\t// we will simply return list2.
\t\tif(l1 == NULL)
        {
\t\t\treturn l2;
\t\t}
\t\t
\t\t// if list2 happen to be NULL
\t\t// we will simply return list1.
\t\tif(l2 == NULL)
        {
\t\t\treturn l1;
\t\t} 
\t\t
\t\t// if value pointend by l1 pointer is less than equal to value pointed by l2 pointer
\t\t// we wall call recursively l1 -> next and whole l2 list.
\t\tif(l1 -> val <= l2 -> val)
        {
\t\t\tl1 -> next = mergeTwoLists(l1 -> next, l2);
\t\t\treturn l1;
\t\t}
\t\t// we will call recursive l1 whole list and l2 -> next
\t\telse
        {
\t\t\tl2 -> next = mergeTwoLists(l1, l2 -> next);
\t\t\treturn l2;            
\t\t}
\t}
};\t