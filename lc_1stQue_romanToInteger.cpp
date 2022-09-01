#include<bits/stdc++.h>
using namespace std;
       // Khud se kra he!!
int romanToInt(string s) {
        int arr[300];
        arr['I'] = 1; 
        arr['V'] = 5;
        arr['X'] = 10;
        arr['L'] = 50;
        arr['C'] = 100;
        arr['D'] = 500;
        arr['M'] = 1000;
        int sum = 0;
        for(int i = 0; i<s.size() - 1; i++){
            if(arr[s[i]] < arr[s[i+1]]){
                sum -= arr[s[i]];
                cout<<"\nless"<<sum;
            } else {
                sum += arr[s[i]];
                cout<<"\ngreater"<<sum;
            }
        }
        sum += arr[s[s.size()-1]];
        return sum;
}

int main(){
	string s = "MCMXCIV";
	// cout<<romanToInt(s);
	vector<string> ss;
	ss.push_back("aditya");
	cout<<ss[1];
	return 0;
}