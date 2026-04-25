#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

vector<int> leaderInArray(int n, int arr[]){
    vector<int> leaders;
    
    int maxFromRight = arr[n-1];
    leaders.push_back(maxFromRight);  
    
    for(int i=n-2; i>=0; i--){
        if(arr[i] > maxFromRight){
            leaders.push_back(arr[i]);
            maxFromRight = arr[i];  
        }
    }

    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    vector<int> leaders = leaderInArray(n,arr);
    
    cout << "Leaders in the array are: ";
    for(int i=0; i<leaders.size(); i++){
        cout << leaders[i] << " ";
    }
    
    return 0;
}