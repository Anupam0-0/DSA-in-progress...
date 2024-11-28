#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& nums, int target) {
    int n = nums.size(); 
    int low = 0, high = n - 1;

    // Perform the steps:
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) return mid;
        else if (target > nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> a ;
    int n, tar;
    cout << "Size: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Inputs: ";
        cin >> a[i];
    }
    cin >> tar;
    int res = binarySearch(a, tar);
    if (res == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: "
                  << res << endl;
    return 0;
}


