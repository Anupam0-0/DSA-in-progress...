//Queslink : https://leetcode.com/explore/learn/card/array-and-string/201/introduction-to-array/1148/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size()-1;
       
        //normal 
        for(int i = n; i>=0; i--){
            if(digits[i] == 9){
                digits[i] = 0;
            }
            else{
                digits[i] += 1;
                return digits;
            }
        }
        // if all n
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};