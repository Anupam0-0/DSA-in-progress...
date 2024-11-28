//Queslink : https://leetcode.com/explore/learn/card/array-and-string/201/introduction-to-array/1147/

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = -1;
        int ind;
        int n = nums.size();
        for(int i = 0 ; i < n; i++){
            if(nums[i] > max){
                max = nums[i];
                ind = i;
            }
        }
        
        for(int i =0; i < n; i++){
            if((nums[i] * 2) > max && i!=ind)
                return -1;
        }        
        return ind;        
    }    
};