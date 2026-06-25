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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr=head;
        vector<int>arr;
        while(curr!=nullptr){
            arr.push_back(curr->val);
            curr=curr->next;
        }


        for (int i = 0; i + k <= arr.size(); i += k) {
            reverse(arr.begin() + i, arr.begin() + i + k);
        }
    
        curr=head;
        int i=0;
        while(curr!=nullptr){
            curr->val=arr[i];
            curr=curr->next;
            i++;
        }
        return head;
    }
};