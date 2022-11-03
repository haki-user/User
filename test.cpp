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

// ll n;

// inline bool read() {
// 	if(!(cin>>n))
// 		return false;
// 	return true;
// }
// -----------------------------------

void soln(){
	ll n, m, a; cin>>n>>m>>a;
	if(n==m && n<=a){
		cout<<1;
		return;
	}
	ll ans = min(((ll)ceil(n/(float)a)*(m/a)), ((ll)ceil(m/(float)a))*(n/a));
	// ans = 
	cout<<((ans<1)?1:ans);
}

// ------------------------------------
int main(){

#ifndef ONLINE_JUDGE
	freopen("debug.txt", "w", stderr);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
	// while(read()){
	// 	debug(t);edl;
	// 	soln();
	// 	cout<<endl;
	// 	t++;
	// }
	soln();
	cout<<endl;

	return 0;
}