class Solution {
public:
    bool check(vector<int>& nums) {
        // for(int i=nums.size(); i<n; i++){
        //     if(nums[i] >= nums[i-1]){
        
        //     } else return false;
        // }
        // return true;
        
        // }
      
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