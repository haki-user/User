#include<bits/stdc++.h>
using namespace std;
//not accepted, better is submitted on codingNinjas
void sort012(int *arr, int n)
{
    int count = 0;
    int i = 0;
    int j = n-1;
    while(i<j){
        cout<<"\n"<<i<<" "<<j;
        cout<<": "<<arr[i]<<" "<<arr[j];
        if(arr[i] > arr[j]){
            swap(arr[i], arr[j]);
            cout<<": "<<arr[i]<<" "<<arr[j];
            if(arr[i] == 0){
                // swap(arr[i], arr[j]);
                i++;
            } else if(arr[i] == 1){
                // swap(arr[i], arr[j]);
                j--;
            }
        } else {
            if(arr[i] == 0) i++;
            else if(arr[i] == arr[j]) i++;
            else j--;
        }
        count++;
        if(count == 10) break;
    }
}

int main(){
	int n = 6;
	int arr[n] = {0, 1, 2, 2 ,1 ,0};
	sort012(arr, n);
    cout<<"\n";
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}