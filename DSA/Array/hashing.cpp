#include<iostream>
using namespace std;

// int main(){
  
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//       int hash[12] = {0};
//       for(int i=0; i<n; i++){
//         hash[i]++;
//       }

//      int q;
//      cin>>q;
//      while(q--){
//         int number ;
//         cin>>number;
//         cout<<hash[number]<<" ";
//      }

//     return 0;
// }

int main(){
   string s;
   cin>>s;

   int hash[256] = {0};
   for(int i=0; i<=s.size(); i++){
    hash[s[i] - 'a']++;
   }

   int q;
   cin>>q;
   while(q--){
    char c;
    cin>>c;
    cout<<hash[c -'a']<<endl;
   }

  return 0;

}