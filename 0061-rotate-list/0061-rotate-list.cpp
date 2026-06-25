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
    ListNode* rotateRight(ListNode* head, int k) {
          ListNode* curr=head;
        vector<int>arr;
        while(curr!=nullptr){
            arr.push_back(curr->val);
            curr=curr->next;
        }
        int n = arr.size();
        if (n==0) return head;
        k = k % n; 

        if (k == 0 || n==0) return head;
         reverse(arr.begin(), arr.end());
         reverse(arr.begin(), arr.begin() + k);
         reverse(arr.begin()+k, arr.end());

    
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