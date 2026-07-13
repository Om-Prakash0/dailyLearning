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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>arr;
        ListNode* curr=head;
        while(curr!=nullptr){
            arr.push_back(curr->val);
            curr=curr->next;
        }
        int n=arr.size();
        if(n==0){
            return head;
        }
        swap(arr[k-1],arr[n-k]);
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