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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        string num1 = "", num2 = "";

        while (l1) {
            num1 += char(l1->val + '0');
            l1 = l1->next;
        }

        while (l2) {
            num2 += char(l2->val + '0');
            l2 = l2->next;
        }

        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;

        string ans = "";

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0)
                sum += num1[i--] - '0';

            if (j >= 0)
                sum += num2[j--] - '0';

            ans += char((sum % 10) + '0');
            carry = sum / 10;
        }

        reverse(ans.begin(), ans.end());

        ListNode* head = new ListNode(ans[0] - '0');
        ListNode* curr = head;

        for (int k = 1; k < ans.size(); k++) {
            curr->next = new ListNode(ans[k] - '0');
            curr = curr->next;
        }

        return head;
    }
};