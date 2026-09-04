class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int k = INT_MAX;

        for(int i = 0; i < nums1.size(); i++){
            k = min(k, nums1[i]);
        }

        if(k % 2 != 0)
            return true;

        for(int i = 0; i < nums1.size(); i++){
            if(nums1[i] % 2 != 0)
                return false;
        }

        return true;
    }
};
