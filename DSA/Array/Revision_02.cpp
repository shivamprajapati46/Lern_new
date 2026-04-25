#include<iostream>
using namespace std;

 int reverse(int arr[], int start, int end){
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return 0;
 }
  
 int LeftRotateK(int n, int arr[], int k){
    k = k % n;
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);

    return 0;
 } 

 int moveZeros(int n, int arr[]){
    int j = 0;
    for(int i=0; i<n ;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return 0;
 }



int main(){

    int n;
    cout<<"Enter Size of array: ";
    cin >>n;

    int arr[n];
    cout<<"Enter the element of array:";
    for(int i=0; i<n; i++){
        cin >>arr[i];
    }

    // int k;
    // cout<<"Left rotate element at position: ";
    // cin >> k;

    // LeftRotateK(n,arr, k);
    moveZeros(n,arr);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

return 0;
}