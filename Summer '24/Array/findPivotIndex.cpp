//Queslink: https://leetcode.com/problems/find-the-middle-index-in-array/
//QuesLink: https://leetcode.com/explore/learn/card/array-and-string/201/introduction-to-array/1144/

class Solution {
public:
    int findMiddleIndex(vector<int>& arr) {
        int n = arr.size();
        int sumLeft, sumRight;
        for (int i = 0; i < n; i++) {
            sumLeft = 0;
            sumRight = 0;
            for (int j = 0; j < i; j++) {
                sumLeft += arr[j];
            }
            for (int j = i + 1; j < n; j++) {
                sumRight += arr[j];
            }
            if (sumLeft == sumRight)
                return i;
        }

        return -1;
    }
};