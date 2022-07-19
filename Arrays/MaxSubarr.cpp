class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum = 0, totalSum = INT_MIN;
        for(auto c : nums)
            curSum = max(c, curSum + c),
            totalSum = max(totalSum, curSum);
        return totalSum;
    }
};