#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

int sub_string_with_K_disting_characters(string s, int k) {
    int maxLength = -1; 
    int l = 0; 
    unordered_map<char, int> mpp;

    for (int r = 0; r < s.length(); r++) {
        mpp[s[r]]++;

        while (mpp.size() > k) {
            mpp[s[l]]--;
            if (mpp[s[l]] == 0) {
                mpp.erase(s[l]); 
            }
            l++;
        }

        if (mpp.size() == k) {
            maxLength = max(maxLength, r - l + 1);
        }
    }
    
    return maxLength;
}

int main() {
    string s = "aarbacbebebe";
    int k = 3;
    cout << "Length: " << sub_string_with_K_disting_characters(s, k) << endl;
    return 0;
}