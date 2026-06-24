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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        ListNode* del;
        int k=0;
        while(curr!=nullptr){
            k++;
            curr=curr->next;
        }
        if(k == n) {
            return head->next;
        }

        curr=head;
        int i=0;
        while(i<k-n-1){
            curr=curr->next;
            i++;
        }
        del=curr->next;
        curr->next=curr->next->next;
        return head;
    }
};