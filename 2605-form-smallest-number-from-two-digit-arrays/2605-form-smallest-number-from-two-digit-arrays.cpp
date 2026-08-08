class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        unordered_map<int,int>mp;
        for(auto a: nums1){
            mp[a]++;
        }
        int ans=0;
        for(auto a: nums2){
            if(mp[a]>=1){
                return ans=a;
            }
        }
        ans=nums1[0]*10+nums2[0];
        int temp =nums2[0]*10+nums1[0];
        return min(temp,ans);
    }
};