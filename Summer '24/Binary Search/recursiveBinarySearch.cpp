#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& nums, int low, int high, int target) {

    if (low > high) return -1; 
    int mid = (low + high) / 2;
    if (nums[mid] == target) return mid;
    else if (target > nums[mid])
        return binarySearch(nums, mid + 1, high, target);
    return binarySearch(nums, low, mid - 1, target);
}

int search(vector<int>& nums, int target) {
    return binarySearch(nums, 0, nums.size() - 1, target);
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
    int index = search(a, tar);
    if (index = -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: "
                  << index << endl;
    return 0;
}

