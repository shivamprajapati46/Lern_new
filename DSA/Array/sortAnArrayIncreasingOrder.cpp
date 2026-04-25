#include <iostream>
using namespace std;

// void sortByFrequency(vector<int>& nums) {

//     unordered_map<int, int> freq;
//     for (int i = 0; i < nums.size(); i++) {
//         freq[nums[i]]++;
//     }
//     sort(nums.begin(), nums.end(), [&](int a, int b) {
//         if (freq[a] == freq[b]) {
//             return a > b;   
//         }
//         return freq[a] < freq[b];
//     });
// }

#include<iostream>
using namespace std;

bool sortedArray(int n, int arr[]){
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    if(sortedArray(n, arr)){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }

    return 0;
}
// int main() {
//     int n;
//     cin >> n;

//     vector<int> nums(n);

//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }

//     sortByFrequency(nums);

//     // print result
//     for (int x : nums) {
//         cout << x << " ";
//     }

//     return 0;
// }
