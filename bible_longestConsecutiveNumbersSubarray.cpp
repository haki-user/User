#include<iostream>
using namespace std;

// aaj dinme max subarray sum karne ke baad (kadane's algo)
// bible ka video dekhte time iska naam padhte hi soln aa gya

int main(){
	int arr[10] = {3,7,1,4,2,5,3,8,10,9};
	int maxS = 1;
	int currCt = 1;
	for (int i = 0; i < 9; ++i)
	{
		if(arr[i]<arr[i+1]){
			currCt++;
			maxS = max(maxS, currCt);
		} else currCt = 1;
	}
	cout<<maxS;
	return 0;
}