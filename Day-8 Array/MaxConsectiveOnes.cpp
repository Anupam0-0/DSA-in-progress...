//code Ques : https://leetcode.com/problems/max-consecutive-ones/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& v) {
        int n = v.size();
        int count = 0;
        int sum = 0;

        for(int i = 0; i < n; i ++){
            if(v[i] == 0){
                if(sum < count){
                    sum = count;
                }
            count = 0;
            }

            if(v[i] == 1){
                count ++;
            }
        }
        return max(sum, count);
    }
};