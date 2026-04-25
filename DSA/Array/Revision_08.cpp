#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm> 

using namespace std;
int largestSubArray(int n, int arr[]) {
    unordered_map<int, int> mpp;
    int maxi = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum == 0) {
            maxi = i + 1;
        } else {
            if (mpp.find(sum) != mpp.end()) {
                maxi = max(maxi, i - mpp[sum]);
            } else {
                mpp[sum] = i;
            }
        }
    }
    return maxi;
}

int main() {
    int arr[] = {15, -2, 2, -8, 1, 7, 10, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "the longest sum subarray: " << largestSubArray(n, arr);

    return 0;
}