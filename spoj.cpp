#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<string> v;
	v.push_back("aditya");
	v.push_back("pratap");
	int a = 5;
	int b;
	for (int i = 0; i < v.size(); ++i)
	{
		sort(v[i].begin(), v[i].end());
		// cout<<v[i]<<endl;
		b = -a;
		cout;
	}
	return 0;
}


int beautifulPairs(vector<int> A, vector<int> B) {
    int ans = 0;
    int freq[1001] ={};
    for(auto e: A) freq[e]++;
    for(auto e: B) if(freq[e]-- > 0) ans++;
    return ans<A.size()?ans+1:ans;
}

The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog