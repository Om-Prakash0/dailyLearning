class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>st;
         if(n == 0) return 0;
        int longest=1;
        for(auto a: nums){
            st.insert(a);
        }
        for(auto a: st){
            if(st.find(a-1)==st.end()){
                int count=1;
                int x=a;
                while(st.find(x+1)!=st.end()){
                    x+=1;
                    count++;
                }
            longest=max(longest,count);
            }
        }
        return longest;
    }
};