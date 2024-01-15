class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        vector <double> sum(nums.size(), 0);
        sum[0] = nums[0];
        
        // 합은 각각 0부터 i까지 취함
        for(int i = 1; i < nums.size(); i++) {
            sum[i] = sum[i-1] + nums[i];
        }

        double maxAvg = sum[k-1]/k;
        for(int i = k; i < nums.size(); i++) {
            // 평균은 i로부터 k개만을 취함
            maxAvg = max(maxAvg, (sum[i] - sum[i-k])/k);
        }
        
        return maxAvg;
    }
};