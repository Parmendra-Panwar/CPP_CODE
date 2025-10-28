#include <vector>
using namespace std;

int binarySearchAsc(const vector<int>& arr, int target, int l, int r) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int binarySearchDesc(const vector<int>& arr, int target, int l, int r) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] > target) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int findPeak(const vector<int>& arr) {
    int l = 0, r = arr.size() - 1;
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] < arr[mid + 1])
            l = mid + 1;
        else
            r = mid;
    }
    return l;
}

int solve(vector<int> &arr, int target) {
    int n = arr.size();
    int peak = findPeak(arr);
    
    int idx = binarySearchAsc(arr, target, 0, peak);
    if (idx != -1) return idx;
    
    return binarySearchDesc(arr, target, peak + 1, n - 1);
}
