#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	for(int i = 0; i<=n-k; i++){
        int max = arr[i];
        for(int j = 1; j<k; j++){
            if(max<arr[i+j]) max = arr[i+j];
        }
        cout<<max<<" ";
    }
    cout<<"\n";
}

int main(){
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}