class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        set<vector<int>>ans;
        int n=nums.size();
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int left=j+1;
                int right=n-1;
                while(left<right){
                    long long  sum=(long long)nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum<target) left++;
                    else if(sum>target) right--;
                    else{
                        vector<int>temp={nums[i],nums[j],nums[left],nums[right]};
                        ans.insert(temp);
                        left++;
                        right--;
                    }
                }
            }
        }
        vector<vector<int>>arr;
        for(auto a: ans){
            arr.push_back(a);
        }
        return arr;
    }
};