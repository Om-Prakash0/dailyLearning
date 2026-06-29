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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* curr = head;
        vector<int> arr;

        while (curr != nullptr) {
            arr.push_back(curr->val);
            curr = curr->next;
        }

        curr = head;
        int j = 0;

        while (curr != nullptr) {
            bool found = false;

            for (int i = j + 1; i < arr.size(); i++) {
                if (arr[i] > curr->val) {
                    curr->val = arr[i];
                    found = true;
                    break;
                }
            }

            if (!found) {
                curr->val = 0;
            }

            curr = curr->next;
            j++;
        }

        curr = head;
        int k = 0;
        while (curr != nullptr) {
            arr[k] = curr->val;
            curr = curr->next;
            k++;
        }

        return arr;
    }
};