class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        vector<int>arr;
        unordered_map<int,int>mp;
        for(int i=nums2.size()-1;i>=0;i--){
            while(s.size()>0 && s.top()<=nums2[i]){
                s.pop();
            }
            if(s.size()==0){
                mp[nums2[i]]=-1;
            }
            else{
                mp[nums2[i]]=s.top();
            }
            s.push(nums2[i]);
        }
        for(auto a:nums1){
            arr.push_back(mp[a]);
        }
        return arr;
    }
};