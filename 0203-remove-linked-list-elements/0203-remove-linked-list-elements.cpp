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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr=head;
        vector<int>arr;
        vector<int>brr;
        while(curr!=0){
            if(curr->val!=val){
                arr.push_back(curr->val);  
                }          
        curr=curr->next;
        }
        if(arr.size()==0){
            return nullptr;
        }
        ListNode* newNode=new ListNode(arr[0]);
        ListNode* curr1=newNode;
        for(int i=1;i<arr.size();i++){
            ListNode* temp=new ListNode(arr[i]);
            curr1->next=temp;
            curr1=curr1->next;
        }
        return newNode;
    }
};