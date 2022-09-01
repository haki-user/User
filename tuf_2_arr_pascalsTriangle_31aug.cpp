#include <bits/stdc++.h> 
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> ans;
    ans.push_back({1});
    for(int i = 1; i<n; i++){
        vector<long long int>v;
        v.push_back(1);
        for(int j = 0; j<ans[i-1].size()-1; j++){
           v.push_back(ans[i-1][j]+ans[i-1][j+1]);
        }
        v.push_back(1);
        ans.push_back(v);
    }
    return ans;
}

int main(){
    int n; cin>>n;
    vector<vector<long long int>> ans;
    ans = printPascal(n);
    // ans.push_back({1,2,4});
    // ans.push_back({1});
    // cout<<ans.size()<<" s"<<ans[0].size();
    for(int i = 0; i<ans.size(); i++){
        for(int spc = n-1-i; spc>=0; spc--) cout<<" ";
        for (int j = 0; j < ans[i].size(); ++j)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}