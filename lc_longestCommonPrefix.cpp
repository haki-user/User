#include<bits/stdc++.h>
using namespace std;
    // string longestCommonPrefix(vector<string>& strs) {

    //     string a = strs[0];
    //     vector<string> ans;
    //     for(int i=1;i<strs.size(); i++){
    //         string t = strs[i];
    //         if(i = 0){
    //            for(int k = 0; k<a.size(); i++){
    //                ans.push_back(a[i]);
    //            }
    //         }
    //         for(int j = 0; j<t.size() || j<ans.size(); j++){
    //             if(j > t.size() && t.size() < ans) {
    //                 ans.pop_back();
    //             }
    //             else if(ans[j] != t[j]){
    //                 ans.pop_back();
    //             }
    //         }
    //     }
    //         return t;
    // }
string longestCommonPrefix(vector<string>& strs) {
        string a = strs[0];
        // vector<string> ans;
        for(int i=1;i<strs.size(); i++){
            string t = strs[i];
            if(a.size()>t.size()) a.resize(t.size());
            for(int j = 0; j<a.size(); j++){
                if(a[j]!=t[j]){
                	// cout<<"\n"<<a[j]<<" "<<t[j];
                	// cout<<"\n"<<a;
                	a.resize(a.size()-1);
                	// cout<<"\n"<<a;
                	j--;
                }           
            }
        }
            return a;
    }
int main(){
	vector<string> strs ={"flower","flow","flighter"};
	cout<<longestCommonPrefix(strs);
	return 0;
}
