#include<iostream>
#include<vector>
using namespace std;

vector<int> intersectionOfTwoArray(int n, int arr1[], int m, int arr2[]) {
    int i = 0, j = 0;
    vector<int> ans;

    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            i++;
        }
        else if(arr2[j] < arr1[i]) {
            j++;
        }
        else {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main() {
    int n;
    cout<<"Enter Size of array: ";
    cin >> n;

    int arr1[n];
    cout<<"Enter the element of array1:";
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int m;
    cout<<"Enter Size of array2: ";
    cin >> m;

    int arr2[m];
    cout<<"Enter the element of array2:";
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> ans =   intersectionOfTwoArray(n, arr1, m, arr2);
    for(int i = 0; i < ans.size(); i++) {
        cout <<ans[i] << " ";
    }

    return 0;

}