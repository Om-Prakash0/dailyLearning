class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int>s;
      for(auto a: num){
        int d=a-'0';
        while(!s.empty() && k>0 && s.top()>d){
            s.pop();
            k--;
        }
        s.push(d);
      }
      while(k>0 && !s.empty()){
        s.pop();
        k--;
      }

      string ans ="";
      while(!s.empty()){
        ans+=to_string(s.top());
        s.pop();
      }
      reverse(ans.begin(),ans.end());
      int i=0;
      while(i<ans.size() && ans[i]=='0'){
        i++;
      }
      ans=ans.substr(i);
      return ans.empty() ? "0" : ans;
        
    }
};