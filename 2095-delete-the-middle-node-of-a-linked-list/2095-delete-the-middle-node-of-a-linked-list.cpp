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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* curr=head;
        ListNode* del;
        int n=0;
        while(curr!=nullptr){
            n++;
            curr=curr->next;
        }
        if(n==1 || n==0){
            return nullptr;
        }
        curr=head;
        int i=0;
        while(i<(n/2)-1){
            curr=curr->next;
            i++;
        }
        del=curr->next;
        curr->next=curr->next->next;
        return head;

    }
};