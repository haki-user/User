#include<bits/stdc++.h>
using namespace std;

int main(){
	long long max = 999991575;
	long long smax = 999984305;
	long long m = 2000000000;
	long long k = 1;
	long long ans = 0;
	while(m>0){
		if(k>0){
			ans+=max;
			k--;
		} else {
			ans+=smax;
			k = 1;
		}
		m--;
	}
	cout<<ans;
}

2*(n/2)(n/2)  1+((n-1)/2)((n-1)/2) 1 + 