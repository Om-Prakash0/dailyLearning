class Solution {
public:
    int minBitFlips(int start, int goal) {
        vector<int>arr1;
        vector<int>arr2;
        while(start>0){
            arr1.push_back(start & 1);
            start>>=1;
        }
        while(goal>0){
            arr2.push_back(goal & 1);
            goal>>=1;
        }
        while(arr1.size() < arr2.size())
            arr1.push_back(0);

        while(arr2.size() < arr1.size())
            arr2.push_back(0);
            
        int count=0;
        for(int i=0;i<arr1.size();i++){
            if(arr1[i]!=arr2[i]){
                count++;
            }
        }
        return count;
    }
};