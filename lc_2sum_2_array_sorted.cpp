#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int sec;
        int left = 0;
        int right = numbers.size()-1;
        vector<int> arr;
        for(int i = 0; i<numbers.size(); i++){
            sec = target - numbers[i];
            arr.push_back(i);
            int count = 0;
            while(left<=right){
                
                int mid = left+(right-left)/2;
                cout<<left<<"l "<<right<<"r "<<mid<<"m "<<sec<<"\n";
                // cout<<mid<<" ";1
                // cout<<numbers[i];2
                // cout<<right;2
                // cout<<left;1
                // cout<<numbers[mid];3
                // cout<<sec;7
                if(numbers[mid]==sec){
                    arr.push_back(mid);
                    return arr;
                }
                else if(numbers[mid]>sec){
                    right = mid-1;
                    cout<<"2nd";
                }
                else if(numbers[mid]<sec){
                    left = mid+1;
                }
                // else if(numbers[mid-1]!=sec && left == right) break;
                // else if(numbers[mid-1]!=sec && left == right && right == 0) break;
                // if(count ==5){
                //     count = 0;
                //     cout<<"\n"<<"a\n";
                //     break;
                // }
                // count++;
                cout<<"s"<<arr.size();
            }
            arr.pop_back();
        }
        return arr;
    }
};

int main(){
	Solution S;
	vector<int> numbers = {5,25,75};
	int target =100;
	vector<int> arr = S.twoSum(numbers, target);
    cout<<arr.size();
	for (int i = 0; i < arr.size(); ++i)
	{
		cout<<arr[i];
	}
	return 0;
}