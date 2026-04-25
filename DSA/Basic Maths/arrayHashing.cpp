#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,2,1,4};

    vector<int> freq(10, 0);

    // hashing
    for(int i = 0; i < arr.size(); i++){
        freq[arr[i]]++;
    }

    // print frequency
    for(int i = 0; i <= freq.size(); i++){
        if(freq[i] > 0){
            cout << i << " -> " << freq[i] << endl;
        }
    }
}