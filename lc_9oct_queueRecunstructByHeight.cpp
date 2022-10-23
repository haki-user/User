#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        for(int i = 0; i<people.size(); i++){
        int min = i;
        for(int j = i+1; j<people.size(); j++){
            if(people[j][0] < people[min][0]) min = j;
        }
        swap(people[i],people[min]);
    }
        for(int i = people.size()-1; i>=0; i--){
            int ai = people[i][0];
            int fi = people[i][1];
            for(int j = i; j<(i+fi); j++){
                people[j][0] = people[j+1][0];
                people[j][1] = people[j+1][1];
            }
            people[i+fi][0] = ai;
            people[i+fi][1] = fi;
        }
    return people;
}

int main(){
		int arr[6] = {1,2,3,4,5,6};
		int f[6] = {4,2,2,0,0,0};
		vector<vector<int>> v = {{1,4},{2,2},{3,2},{4,0},{5,0},{6,0}};
		reconstructQueue(v);
		for (int i = 5; i >= 0; i--)
		{
          	// cout<<"i"<<i<<endl;
			int ai = arr[i];
			int fi = f[i];
			// cout<<ai<<endl;
			// cout<<fi<<endl;

			for (int j = i; j <i+ fi; ++j)
			{
				arr[j] = arr[j+1];
				f[j] = f[j+1];
			}

		// for (int i = 0; i < 6; ++i){
		// 	cout<<arr[i]<<" ";
		// }cout<<endl;
		// for (int i = 0; i < 6; ++i){
		// 	cout<<f[i]<<" ";
		// }cout<<endl<<endl;

			arr[i+fi] = ai;
			f[i+fi] = fi;

		// for (int i = 0; i < 6; ++i){
		// 	cout<<arr[i]<<" ";
		// }cout<<endl;
		// for (int i = 0; i < 6; ++i){
		// 	cout<<f[i]<<" ";
		// }cout<<endl<<endl<<endl;
		}
		for (int i = 0; i < v.size(); ++i){
	
			cout<<v[i][0]<<" ";
			// if()
		}
		return 0;
}