#include<iostream>
#include<map>
using namespace std;

map<long long,long long> m;
long long count;
int z;

long long fib(long long num){
	if(num < 2) return num;
	if(m[num]) return m[num];

	m[num] = fib(num - 2) + fib(num - 1);
	return m[num];
}
long long fibIter(long long num){
	long long arr[num] = {0,1};

	for(int i = 2; i<=num; i++){
		arr[i] = arr[i - 2] + arr[i - 1];
	}
	return arr[num];
}
long long fibRec(int num){
	count++;
	if(num<2) return num;
	if(num == 2) return 1;
	return fibRec(num-2) + fibRec(num-1);
}
int main(){
	
	int num;
	cin>>num;
	// cout<<fib(num);
	// cout<<"\n"<<fibIter(num);
	cout<<'\n'<<fibRec(num)<<" "<<count;
	return 0;
}