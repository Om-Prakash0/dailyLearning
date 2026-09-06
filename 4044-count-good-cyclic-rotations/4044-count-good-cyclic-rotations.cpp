class Solution { 
public: 
    int countGoodRotations(vector<int>& nums) { 
        int n = nums.size(); 
        vector<long long> arr(n * 2); 
        long long left = 0; 
        long long right = 0; 
        for (int i = 0; i < n / 2; i++) { 
            left += nums[i]; 
            right += nums[n - 1 - i]; 
        }    
        arr[0] = left; 
        arr[n * 2 - 1] = right; 
        for (int i = 1; i < n; i++) { 
            left = left - nums[i - 1] + nums[(i + n / 2 - 1) % n]; 
            right = right - nums[(n / 2 + i - 1) % n] + nums[i - 1]; 
            arr[i] = left; 
            arr[(n * 2) - 1 - i] = right; 
        } 
        int count = 0; 
        for (int i = 0; i < n; i++) { 
            if (arr[i] > arr[(n * 2 - 1) - i]) { 
                count++; 
            } 
        }
        return count; 
    } 
};