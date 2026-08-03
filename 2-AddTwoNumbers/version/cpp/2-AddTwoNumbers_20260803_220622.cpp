// Last updated: 8/3/2026, 10:06:22 PM
1class Solution {
2public:
3    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
4        ListNode* dummyHead = new ListNode(0);
5        ListNode* tail = dummyHead;
6        int carry = 0;
7
8        while (l1 != nullptr || l2 != nullptr || carry != 0) {
9            int digit1 = (l1 != nullptr) ? l1->val : 0;
10            int digit2 = (l2 != nullptr) ? l2->val : 0;
11
12            int sum = digit1 + digit2 + carry;
13            int digit = sum % 10;
14            carry = sum / 10;
15
16            ListNode* newNode = new ListNode(digit);
17            tail->next = newNode;
18            tail = tail->next;
19
20            l1 = (l1 != nullptr) ? l1->next : nullptr;
21            l2 = (l2 != nullptr) ? l2->next : nullptr;
22        }
23
24        ListNode* result = dummyHead->next;
25        delete dummyHead;
26        return result;
27    }
28};