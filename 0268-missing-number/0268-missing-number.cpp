class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int Sum = n * (n + 1) / 2;
        int numsSum = 0;
        for(int i = 0; i < n; i++ ){
            numsSum += nums[i];
        }
        return Sum - numsSum;
    }
};