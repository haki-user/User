#include<bits/stdc++.h>
using namespace std;

void sort012(int *arr, int n)
{
    int i = 0;
    int j = n-1;
    while(i<j){
        cout<<"\n"<<i<<" "<<j;
        if(arr[i] > arr[j]){
            if(arr[j] == 0){
                swap(arr[i], arr[j]);
                i++;
            } else if(arr[j] == 1){
                swap(arr[i], arr[j]);
                j--;
            }
        } else j--;
    }
}

int main(){
	int n = 6;
	int arr[n] = {0, 1, 2, 2 ,1 ,0};
	sort012(arr, n);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}