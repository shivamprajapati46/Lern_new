#include<iostream>
#include<unordered_map>
using namespace std;

// int main(){

//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0; i<n; i++){
//      cin>>arr[i];
//    }

//     int hash[100] = {0};

//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }

//     int maxii = 0;

//     for(int i=0;i<100;i++){
//         if(hash[i] > maxii){
//             maxii = hash[i];
//         }
//     }

//     cout<<"Most frequent frequency = "<<maxii;
//     return 0;
// }

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_map<int,int>mpp;

    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
  int maxi= 0;

    for(auto it:mpp){
        if(it.second > maxi){
            maxi=it.second;
        }
    }
   cout<<"Most frequent frequency = "<<maxi;
    return 0;
}


