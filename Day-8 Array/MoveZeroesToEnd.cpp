//Ques: https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& v) {
        vector<int> arr;
        vector<int> zero;
        int n = v.size();
        for(int i = 0; i < n; i++){
            if(v[i] != 0) arr.push_back(v[i]);
            else zero.push_back(v[i]);
        }
        arr.insert(arr.end(), zero.begin(), zero.end());
        v = arr;
        return;

    }
};