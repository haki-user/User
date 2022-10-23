#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int k; cin>>k;
	vector<int>a;
	for(int i = 0; i<n; i++){
		int b; cin>>b;
        a.push_back(b);
	}

	 int ct = 0;
    if(k<n){
        for(int i = 0; i<n && k; i++){
            int max = i+1;
            for(int j = i+1; j<n; j++){
                if(a[max]<a[j]) max = j;
                
            }
            if(a[i]<a[max]){
                swap(a[i], a[max]);
                k--;
            }
            ct++;
            
        }
    } else sort(a.begin(), a.end(), greater<int>());

    for (int i = 0; i < n; ++i)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

	return 0;
}


The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
