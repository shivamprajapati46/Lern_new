#include <iostream>
using namespace std;


// without Method Reverse function
void Reverse(int arr[], int start , int end){
    while (start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

  //Optimize Solution
    void RotateLeftToRight(int arr[],int n, int k){
        Reverse(arr, 0, n-1 );
        Reverse(arr,n-k, n-1);
        Reverse(arr,n-k, n-1);
    }

    int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i <n; i++){
        cin >>arr[i];
    }
    int k; 
    cin >> k;
    RotateLeftToRight(arr, n ,k);
    for(int  i=0; i< n; i++){
        cout << arr[i] << " ";
    }
 return 0;
}