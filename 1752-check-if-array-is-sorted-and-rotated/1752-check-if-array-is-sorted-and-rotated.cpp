class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> temp = nums;
        temp.insert(temp.end(), nums.begin(), nums.end());

        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        return search(
                   temp.begin(), temp.end(),
                   sorted.begin(), sorted.end()
               ) != temp.end();

    }
};