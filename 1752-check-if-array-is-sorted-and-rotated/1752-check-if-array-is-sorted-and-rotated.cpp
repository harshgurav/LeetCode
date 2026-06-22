class Solution {
public:
    bool check(std::vector<int>& nums) {
        int count_drops = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; ++i) {
            if (nums[i] > nums[(i + 1) % n]) {
                count_drops++;
            }
            
            if (count_drops > 1) {
                return false;
            }
        }
        
        return true;
    }
};