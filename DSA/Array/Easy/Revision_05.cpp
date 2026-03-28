#include<iostream>
#include<algorithm>
using namespace std;

int countineousSequence(int n, int arr[]){
    sort(arr, arr + n);
    int lastSmallest = 0;
    int longestSeq = 1;
    int count = 0;
    for(int i=0; i<n; i++){
            if(arr[i]-1 == lastSmallest){
                count+=1;
                lastSmallest=arr[i];
            }else if(arr[i] != lastSmallest){
                count=1;
                lastSmallest=arr[i];
            }
        longestSeq= max(longestSeq, count);
    }

    return longestSeq;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     cout << countineousSequence(n,arr);
    
     return 0;
}
