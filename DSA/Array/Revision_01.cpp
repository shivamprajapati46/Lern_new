#include<iostream>
using namespace std;


int largestElement(int n, int arr[]){
    int largest= arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]> largest){
            largest=arr[i];
        }
    }
    return largest;
}
 
int secondLargest(int n, int arr[]){
    int largest = arr[0];
    int sLargest= -1;
    for(int i=0;i<n; i++){
        if(arr[i]>largest){
            sLargest = largest;
            largest= arr[i];
        }else if(largest < sLargest && largest != sLargest){
            sLargest = arr[i];
        }
    }
    return sLargest;
}

int sortedArray(int n, int arr[]){
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
} 


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // if(sortedArray(n,arr)){
    //      cout<<"Array is sorted";
    // }
    // else{
    //     cout<<"Array is not sorted";
    // }

    cout<< "Second Larget Element:--->"<< secondLargest(n,arr) << " ";

    return 0;
}