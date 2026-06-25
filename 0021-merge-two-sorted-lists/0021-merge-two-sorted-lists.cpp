class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;

        vector<int> arr;

        while (curr1 != nullptr) {
            arr.push_back(curr1->val);
            curr1 = curr1->next;
        }

        while (curr2 != nullptr) {
            arr.push_back(curr2->val);
            curr2 = curr2->next;
        }

        sort(arr.begin(), arr.end());

        if (arr.empty()) return nullptr;

        ListNode* head = new ListNode(arr[0]);
        ListNode* curr = head;

        for (int i = 1; i < arr.size(); i++) {
            curr->next = new ListNode(arr[i]);
            curr = curr->next;
        }

        return head;
    }
};