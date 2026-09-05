class Solution {
public:
    bool palindrome(string str){
        int i=0;
        int j=str.size()-1;
        while(i<j){
            if(str[i]!=str[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    bool isPalindromic(string s) {
        string str="";
        for(auto a: s){
            int temp=(int)a;
            str+=bitset<8>(temp).to_string();
        }
        return palindrome(str);
    }
};