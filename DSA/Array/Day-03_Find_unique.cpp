#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;

        // Count frequency of each number
        for (int num : nums) {
            freq[num]++;
        }

        // Find the element that appears only once
        for (auto it : freq) {
            if (it.second == 1) {
                return it.first;
            }
        }

        return -1; // in case no unique element found
    }
};
