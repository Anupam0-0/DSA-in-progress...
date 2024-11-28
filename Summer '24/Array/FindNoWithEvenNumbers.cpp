//Ques link : https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3237/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int res = 0;
        
        for(int i =0; i < n; i++){
            count = 0;
            while(nums[i]){
                nums[i] /= 10;
                count ++;
            }
            
            if(count%2 == 0)
                res++;
        }
        return res;
    }
};