class Solution {
public:
    ListNode* removeNodes(ListNode* head) {

        vector<int> arr;
        ListNode* curr = head;
        while(curr != nullptr){
            arr.push_back(curr->val);
            curr = curr->next;
        }

        int n = arr.size();

        vector<int> brr;
        int maxi = arr[n-1];
        brr.push_back(arr[n-1]);

        for(int i = n - 2; i >= 0; i--){
            if(arr[i] >= maxi){
                brr.push_back(arr[i]);
                maxi = arr[i];
            }
        }

        reverse(brr.begin(), brr.end());
        if(brr.size() == 0) return nullptr;

        ListNode* newNode = new ListNode(brr[0]);
        ListNode* curr1 = newNode;

        for(int i = 1; i < brr.size(); i++){
            ListNode* temp = new ListNode(brr[i]);
            curr1->next = temp;
            curr1 = temp;
        }

        return newNode;
    }
};