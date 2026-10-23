class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0)
            return 1;

        string str = "";

        while (n > 0) {
            int d = n % 2;
            str += to_string(d);
            n /= 2;
        }

        for (auto& a : str) {
            if (a == '0')
                a = '1';
            else
                a = '0';
        }

        int ans = 0;
        int i = 1;
        int j = 0;
        int k = str.size();

        while (j < k) {
            ans += (str[j] - '0') * i;
            i *= 2;
            j++;
        }

        return ans;
    }
};