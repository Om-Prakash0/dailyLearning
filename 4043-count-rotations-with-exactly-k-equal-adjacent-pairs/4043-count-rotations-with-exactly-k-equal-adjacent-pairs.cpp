class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            string temp = "";
            int p=0;
            for (int j = 0; j < n; j++) {
                temp += s[(i + j) % n];
            }

            for (int x = 0; x < n - 1; x++) {
                if (temp[x] == temp[x + 1])
                    p++;
            }
            if(p==k) count++;
        }

        return count;
    }
};