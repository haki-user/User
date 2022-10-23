#include <bits/stdc++.h>
using namespace std;

#define ll long long
#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<":";_print(x);
#define edl cerr<<endl;
#else
#define debug(x)
#define edl;
#endif
#define fn for(int i=0;i<n;i++)
// void _print(int *a) {cerr<<"[ ";for(auto e: a) _print(e);}
template<class T> void _print(T x) {cerr<<x<<" ";}
template<class T> void _print(vector<T> v){cerr<<"[ ";for(T e:v) _print(e);cerr<<"]"<<endl;}
// template<class T> void _print(T a[]){cerr<<"[";for(int i=0;i<9;i++){_print(a[i]);}cerr<<"]"<<endl;}

void soln(){
	int n,t; cin>>n>>t;
	int idx[n]={};
	idx[1] = 1;
	for(int i = 1; i<n; i++){
		int a; cin>>a;
		if(idx[i] > 0) idx[i+a]++;
	}
	cout<<(idx[t]>0?"YES":"NO");
}


int main(){

#ifndef ONLINE_JUDGE
	freopen("debug.txt", "w", stderr);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t=1;
	while(t--){
		soln();
		if(t>0) cout<<endl;
	}

	// soln();

	return 0;
}