class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s1;
        vector<int> arr1;

        for (int i = heights.size() - 1; i >= 0; i--) {
            while (!s1.empty() && heights[s1.top()] >= heights[i]) {
                s1.pop();
            }

            if (s1.empty()) {
                arr1.push_back(heights.size());
            } else {
                arr1.push_back(s1.top());
            }

            s1.push(i);
        }

        reverse(arr1.begin(), arr1.end());

        stack<int> s2;
        vector<int> arr2;
      
        for (int i = 0; i < heights.size(); i++) {
            while (!s2.empty() && heights[s2.top()] >= heights[i]) {
                s2.pop();
            }

            if (s2.empty()) {
                arr2.push_back(-1);
            } else {
                arr2.push_back(s2.top());
            }

            s2.push(i);
        }

        int ans = 0;

        for (int i = 0; i < heights.size(); i++) {
            int temp = heights[i] * (arr1[i] - arr2[i] - 1);
            ans = max(ans, temp);
        }

        return ans;
    }
};