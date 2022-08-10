#include<iostream>
using namespace std;

void getElements(int* arr,int r,int c){
	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j){
			cin>>( *((arr + i * c) + j));
		}
	}
	return;
}
void printElements(int* arr,int r,int c){
	for (int i = 0; i < r; ++i){
		cout<<"\n";
		for (int j = 0; j < c; ++j){
			cout<<( *((arr + i * c) + j))<<" ";
		}
	}
	return;
}

int main(){
	cout<<"Hello World";
	int r,c;
	cin>>r>>c;
	int arr[r][c];
	int arr2[r][c];
	getElements(*arr,r,c);
	printElements(*arr,r,c);
	getElements(*arr,r,c);
	printElements(*arr,r,c);
	return 0;
}