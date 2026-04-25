#include<iostream>
#include<vector>

using namespace std;


vector<int>unionOfTwoArray(int n, int arr1[], int m, int arr2[]){
    vector<int>temp;
    int i=0, j=0;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(temp.size()==0 || temp.back()!= arr1[i]){
                temp.push_back(arr1[i]);
            }
             i++;
        }else{
           if(temp.size()==0 || temp.back()!= arr2[j]){
                temp.push_back(arr2[j]);
            } 
             j++;
        }
        while(j<m){
            if(temp.size()==0 || temp.back()!= arr2[j]){
                temp.push_back(arr2[j]);
            }
            j++;
        }
        while(i<n){
            if(temp.size()==0 || temp.back()!= arr1[i]){
                temp.push_back(arr1[i]);    
            }
            i++;
        }

    }
    return temp;
}
    
int main(){
    int n;
    cout<<"Enter the size of First Array:";
    cin>>n;
    int arr1[n];
    cout<<"Enter the first Array Elements:";
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    int m;
    cout<<"Enter the size of Second Array:";
    cin>>m;
    int arr2[m];
    cout<<"Enter the second Array Elements:";
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    vector<int> ans = unionOfTwoArray(n, arr1, m, arr2);
      
     for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}