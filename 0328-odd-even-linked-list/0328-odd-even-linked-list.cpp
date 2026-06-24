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
    ListNode* oddEvenList(ListNode* head) {
        vector<int>even;
        vector<int>odd;
        ListNode* curr=head;
        int i=0;
        while(curr!=nullptr){
            if(i%2==0){
                even.push_back(curr->val);
            }
            else{
                odd.push_back(curr->val);
            }
            i++;
            curr=curr->next;
        }
        curr=head;
        int j=0;
        while(j<even.size()){
            curr->val=even[j];
            j++;
            curr=curr->next;
        }
        int k=0;
        while(k<odd.size()){
            curr->val=odd[k];
            k++;
            curr=curr->next;
        }
        return head;
    }
};