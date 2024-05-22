//Ques link : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    vector<int> searchRange(vector<int>& v, int target) {
        int n = v.size();
        vector<int> res;
        for (int i = 0; i < n; i++) {
            if (v[i] == target) {
                res.push_back(i);
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            if (v[n - i - 1] == target) {
                res.push_back(n - i - 1);
                break;
            }
        }
        if (empty(res))
            res = {-1, -1};
        return res;
    }
};