class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        for(auto a: nums){
            if(a%2==0){
                even.push_back(a);
            }
        }
        for(auto a: nums){
            if(a%2!=0){
                odd.push_back(a);
            }
        }
        vector<int>arr;

        for(auto a:even){
                arr.push_back(a);
        }
        for(auto a:odd){
                arr.push_back(a);
        }
        
        return arr;

    }
};