class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        while(!nums.empty()){
            set<int>st;
            for(auto a: nums) st.insert(a);
            for(auto a: st){
                ans.push_back(a);
                for(int i=0;i<nums.size();i++){
                    if(nums[i]==a){
                        nums.erase(nums.begin()+i);
                        break;
                    }
                }
            } 
        }
        return ans;

    }
};