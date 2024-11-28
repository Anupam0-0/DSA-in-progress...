//Ques: https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        int res = n * (n+1)/2;
        for(int i = 0; i < n; i++){
            sum += nums[i];
        }

        return abs(res - sum);
    }
};