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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr=head;
        set<int>st;
        while(curr!=nullptr){
            st.insert(curr->val);
            curr=curr->next;
        }
        vector<int>arr;
        for(auto a: st){
            arr.push_back(a);
        }
        if (arr.empty())
        return nullptr;
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