#include<iostream>
using namespace std;

void arrayReverse(int arr[], int l, int r){
    if(l >= r) return;
    swap(arr[l], arr[r]);
    arrayReverse(arr, l+1, r-1);
}


void arrayReverseOptimal(int arr[], int i, int n){
    if(i>= n/2) return;
    swap(arr[i], arr[n-i-1]);
    arrayReverseOptimal(arr, i+1, n);
}


//Check String is Palindrome.
bool func(int i, string &s){
    if(i>= s.size()/2) return true;
    if(s[i] !=s[s.size()-i-1])
    return false;
    return func(i+1, s);
}


int main(){

    // int n;
    // cin >> n;
    // int arr[n];

    // for(int i=0; i<n; i++){
    //     cin >> arr[i];
    // }

    // arrayReverseOptimal(arr, 0, n);

    // for(int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    // }

    // string s ="madam";
    // cout<< func(0,s);

    // cout<< fib(50);
   
   
   return 0;
   
}