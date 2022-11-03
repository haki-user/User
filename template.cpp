#include<bits/stdc++.h>
#include<windows.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define alert Beep(750, 450);
#define debug(x) cerr<<#x<<":";_print(x);
#define edl cerr<<endl;
#else
#define debug(x)
#define edl;
#endif
// void _print(int *a) {cerr<<"[ ";for(auto e: a) _print(e);}
template<class T> void _print(T x) {cerr<<x<<" ";}
template<class T> void _print(vector<T> v){cerr<<"[ ";for(T e:v) _print(e);cerr<<"]"<<endl;}

//for input (copied from cf adedalic)
int c, sum; //globally, wtf is inline??
inline bool read() {
	if(!(cin >> c >> sum))
		return false;
	return true;
}

void soln(){
	
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("debug.txt", "w", stderr);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifdef LOCAL //copied from cf Nebuchadnezzar
	auto start_time = clock();
	cerr << setprecision(3) << fixed;
#endif
	cout << setprecision(15) << fixed;

	int t; cin>>t;
	while(t--) soln();
	cout<<endl;

	#ifdef LOCAL //copied from cf Nebuchadnezzar
		auto end_time = clock();
		cerr << "Execution time: " << (end_time - start_time) * (int)1e3 / CLOCKS_PER_SEC << " ms\n";
	#endif

	return 0;
}



#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define INF_LL 9223372036854775807
#define INF 2000000000
#define PI acos(-1.0)
#define EPS 1e-9
#define LL long long
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define setzero(a) memset(a,0,sizeof(a))
#define setdp(a) memset(a,-1,sizeof(a))