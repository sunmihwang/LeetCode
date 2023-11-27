#include <cmath> // std::abs

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        
        int n = nums.size();
        int left = 0;
        int right = nums.size() - 1;
        
        vector<int> result;
        vector<int>::iterator it;
        it = result.begin();
        
        // put the value from the end
        while(n > 0) {
            
            int square;
            
            if(std::abs(nums[left]) < std::abs(nums[right])) {
                square = nums[right];
                right--;
            } else {
                square = nums[left];
                left++;
            }            

            it = result.insert(it, square * square); 
            n--;
        }
        
        return result;
    }
};
