#include<iostream>
#include<map>

using namespace std;
map<long long, long long> m;
long long count;
long long fib(int num){
	count++;
	if(num < 2) return num;
	if(num == 2) return 1;
	if(m[num]) return m[num];

	m[num-2] = fib(num-2);
	m[num-1] = fib(num-1);
	return m[num-2] + m[num-1];
}

int main(){
	int num;
	cin>>num;
	cout<<fib(num)<<" "<<count;
	return 0;
}