// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     int temp = t;
//     while(t--){
//         int n,m;
//         cin>>n>>m;
//         int arr[n];
//         int sum = 0;
//         for(int i = 0; i<n; i++){
//             cin>>arr[i];
//             sum+=arr[i];
//         }
//         cout<<"Case #"<<temp-t<<": "<<sum%m<<"\n";
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++){
        int max, ans = 0;
        int n;
        cin>>n;
        int v[n];
        for(int j = 0; i<n; j++){
            cin>>v[i];
            cout<<j;
            if(j==0){
                max = v[0];
            } else if(max<v[i]){
                max = v[i];
                ans++;
            }
            if(j==5) break;
        }
        cout<<"Case #"<<i<<": "<<ans<<"\n";
    }
    return 0;
}