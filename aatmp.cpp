#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v = {1,2,3,4,5,6};
	v.insert(v.begin()+3+1+1, v[3]);
	v.erase(v.begin()+3);
	for(auto a: v){
		cout<<a<<" ";
	}
	return 0;
}