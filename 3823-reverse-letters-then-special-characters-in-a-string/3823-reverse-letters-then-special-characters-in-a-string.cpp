
class Solution {
public:
    string reverseByType(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            if (ispunct(s[left]) && ispunct(s[right])) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
            else if (!ispunct(s[left])) {
                left++;
            }
            else if (!ispunct(s[right])) {
                right--;
            }
        }

        left = 0;
        right = s.size() - 1;

        while (left < right) {
            if (isalpha(s[left]) && isalpha(s[right])) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
            else if (!isalpha(s[left])) {
                left++;
            }
            else if (!isalpha(s[right])) {
                right--;
            }
        }

        return s;
    }
};
