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
    void reorderList(ListNode* head) {
        ListNode* curr=head;
        vector<int>arr;
        while(curr!=nullptr){
            arr.push_back(curr->val);
            curr=curr->next;
        }
        int n=arr.size();
        vector<int>brr(n);
        int j=0;
        int k=n-1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                brr[i]=arr[j];
                j++;
            }
            else {
                brr[i]=arr[k];
                k--;
            }
        }
        curr=head;
        int l=0;
        while(curr!=nullptr){
            curr->val=brr[l];
            curr=curr->next;
            l++;
        }
    }
};