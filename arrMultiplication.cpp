#include<iostream>
using namespace std;

void getElements(int* arr,int r,int c){
	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j){
			cin>>(*((arr + i * c) + j));
		}
	}
	return;
}

void printElements(int* arr,int r,int c){
	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j){
			cout<<(*((arr + i * c) + j))<<" ";
		}
		cout<<"\n";
	}
	return;
}

int main(){
	int r,c,r2,c2,i,j,k;
	cin>>r>>c;
	int arr[r][c];
	getElements(*arr, r, c);
	
	again:
	cin>>r2>>c2;
	if(c != r2){
		cout<<"\nMultiplication not possible.\nEnter r2 & c2 again: ";
		goto again;
	}
	int arr2[r2][c2];
	getElements(*arr2, r2, c2);

	int arr3[r][c2];
	int sum = 0;
	for (i = 0; i < r; ++i){
		for (j = 0; j < c2; ++j){
			for (k = 0; k < r2; ++k){
				sum += arr[i][k] * arr2[k][j];
			}
			arr3[i][j] = sum;
			sum = 0;
		}

	}
    printElements(*arr3, r, c2);

	return 0;
}