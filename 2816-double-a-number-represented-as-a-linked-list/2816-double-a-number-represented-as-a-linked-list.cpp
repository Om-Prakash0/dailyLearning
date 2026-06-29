/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* doubleIt(ListNode* head) {

        string st = "";

        ListNode* curr = head;
        while (curr) {
            st.push_back(curr->val + '0');
            curr = curr->next;
        }

        int carry = 0;

        for (int i = st.size() - 1; i >= 0; i--) {
            int digit = (st[i] - '0') * 2 + carry;
            st[i] = (digit % 10) + '0';
            carry = digit / 10;
        }

        if (carry) {
            st = char(carry + '0') + st;
        }

        ListNode* newNode = new ListNode(st[0] - '0');
        ListNode* curr1 = newNode;

        for (int i = 1; i < st.size(); i++) {
            curr1->next = new ListNode(st[i] - '0');
            curr1 = curr1->next;
        }

        return newNode;
    }
};