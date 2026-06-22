class Solution {
public:
    int secondHighest(string s) {
        vector<int>arr;
       for (auto a : s) { 
            if (a >= '0' && a <= '9') {
                arr.push_back(a - '0');
            }
        }
        sort(arr.begin(), arr.end());
        arr.erase(unique(arr.begin(), arr.end()), arr.end());
        if(arr.size()==1 || arr.size()==0){
            return -1;
        }
        return arr[arr.size()-2];
    }
};