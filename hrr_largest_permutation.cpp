#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	bool flag = false;
	int ct = 0;
	int pc = 1;
	for (int i = 0; i < n-1; ++i)
	{
		if(a[i]>=a[i+1]){
			if(i==0){
				pc = 2;
			}
			ct+=pc;
			pc = 1;
		}
		else {
			ct+=pc;
			pc++;
		}
	}
	cout<<pc;
	if(pc == 1 && a[n-2] == a[n-1]) ct++;
	else if(pc == 1) ct+=2;
	else ct+=pc;
	cout<<ct;
	return 0;
}