#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
vector<int> v = {6,5,4,3,2,1};
vector<int> mergeSort(vector<int> a){
	int n = a.size()-1;
	if(a.size() == 0) return a;
	vector<int> right = mergeSort(a.erase((a.end()), a.begin()));
	// vector<int> left = mergeSort(a.erase(a.end(), a.begin()+n/2));
	if(left[0] < right[0]){
		a = left;
		a.append(right);
		return a;
	} else {
		a = right;
		a += left;
	}
}
int main(){
	
	mergeSort(a);

}