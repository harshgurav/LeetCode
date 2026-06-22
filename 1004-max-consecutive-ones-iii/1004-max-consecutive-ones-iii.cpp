class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start = 0;
        int end = 0;
        int ans = 0;
        int count = 0;
        int kcount = k;
        while (end < nums.size()) {
            if (nums[end] == 1) {
                end++;
                count++;
            } else if (nums[end] == 0 && kcount > 0) {
                count++;
                kcount--;
                end++;
            } else {
                while (start < end && nums[start] != 0) {
                    start++;
                }
                start++;
                kcount++;
                count = 0;
                continue;
            }
            ans = max(end - start, ans);
        }
        return ans;
    }
};