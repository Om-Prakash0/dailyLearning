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
    int getDecimalValue(ListNode* head) {
        ListNode* curr=head;
        vector<int>arr;
        int sum=0;
        while(curr!=0){
            arr.push_back(curr->val);
            curr=curr->next;
        }
        int j=0;
        for(int i=arr.size()-1;i>=0;i--){
            sum=sum+(arr[i]*pow(2,j));
            j++;
        }
        return sum;
    }
};