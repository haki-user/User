#include<bits/stdc++.h>
using namespace std;

int main(){
	int r,c;
	cout<<"Enter no of row and columns: ";
	cin>>r>>c;
	int arr[r][c];
	cout<<"\nEnter array elements: ";
	for (int i = 0; i < r; ++i)
	{
		cout<<"\n";
		for (int j = 0; j < c; ++j)
		{
			cin>>arr[i][j];
			cout<<arr[i][j]<<" ";
		}
	}
	int r2,c2;
    cout<<"\nEnter no of row and columns: ";
	cin>>r2>>c2;
	int arr2[r2][c2];
	cout<<"\nEnter array2 elements: ";
	for (int i = 0; i < r2; ++i)
	{
		cout<<"\n";
		for (int j = 0; j < c2; ++j)
		{
			cin>>arr2[i][j];
			cout<<arr2[i][j]<<" ";
		}
	}
	cout<<"\n a";
	int arr3[r][c2];
for (int i = 0; i < r; ++i)
{
	for (int j= 0; j < c2; ++j)
	{
		for (int k = 0; k < r2; ++k)
			{
				arr3[i][j] += arr[j][k] * arr2[k][j];
			}	
	}
}

for (int i = 0; i < r; ++i)
	{
		cout<<"\n";
		for (int j = 0; j < c2; ++i)
		{
			// cin>>arr2[r2][c2];
			cout<<arr3[i][j]<<" ";
		}
	}

	return 0;
}

