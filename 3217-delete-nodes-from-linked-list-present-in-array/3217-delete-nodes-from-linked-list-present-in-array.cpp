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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* curr=head;
        vector<int>temp;
        vector<int>brr;
        unordered_map<int,int>mp;
        while(curr!=nullptr){
            temp.push_back(curr->val);
            curr=curr->next;
        }

        for(auto a: nums){
            mp[a]++;
        }
        for(auto a: temp){
            if(mp[a]==0){
                brr.push_back(a);
            }
        }
        if(brr.size()==0){
        return nullptr;
        }
       ListNode* newNode=new ListNode(brr[0]);
       ListNode* curr1=newNode;
       for(int i=1;i<brr.size();i++){
        ListNode* temp1 =new ListNode(brr[i]);
        curr1->next=temp1;
        curr1=curr1->next;
       }
       return newNode;
    }
};