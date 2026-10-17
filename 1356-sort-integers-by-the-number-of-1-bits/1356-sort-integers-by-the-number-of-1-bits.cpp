class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>arrp;
        for(int i=0;i<arr.size();i++){
            long long count=0;
            int num=arr[i];
            while(num>0){
                long long d=num%2;
                if(d==1) count++;
                num/=2;
            }
            arrp.push_back({arr[i],count});
        }
        sort(arrp.begin(),arrp.end(),[](auto a,auto b){
           if(a.second==b.second) return a.first<b.first;
           return a.second<b.second;
        });
        vector<int>ans;
        for(auto a:arrp){
            ans.push_back(a.first);
        }
        return ans;
    }
};