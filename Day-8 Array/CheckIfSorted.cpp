//Ques link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

class Solution {
public:
    bool check(vector<int>& arr) {
        int n = arr.size();
        int cnt = 0;

        for (int i = 1; i < n; i++) {
            if (arr[i - 1] > arr[i]) {
                cnt++;
            }
        }
        if (arr[n - 1] > arr[0]) {
            cnt++;
        }
        return cnt <= 1;
    }
};