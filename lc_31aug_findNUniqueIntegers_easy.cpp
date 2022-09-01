#include<bits/stdc++.h>
using namespace std;

int main(){
	int n = 6;
	vector<int> ans;
	int tmp = 1;
	while(n-=2 > 0){
		ans.push_back(tmp);
		ans.push_back(-tmp);
		tmp++;
		cout<<n<<" ";
		// if(tmp ==5 ) break;
	}
	return 0;
}