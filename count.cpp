#include<bits/stdc++.h>
using namespace std;

int main(){
	char s[12233];
	cin.getline(s, 12233);
	int count = 0;
	int i = 0;
	char c = s[i];
	while(c != 'D'){
		if(c != ' ') count++;
		i++;
		c = s[i];
	}
	cout<<count;
	return 0;
}