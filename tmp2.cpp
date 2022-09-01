#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        // int count = 0;
        // int n = nums.size();
        // for(int i = 0; i<n; i++){
        //     for(int j = i+1; j<n; j++){
        //         if(nums[i]>=nums[j]){
        //             count++;
        //             break;
        //         }
        //     }
        //     if(count>1) return false;  
        // }
        // return true;
//         int arr[nums.size()];
//         for(int i = 0; i<nums.size(); i++){
//            arr[i] = i;
//         }
//         int count =0;
//         for(int i = 0; i<nums.size()-1; nums++){
//             for(int j = 0; j<nums.size()-1; j++){
//                 if(arr[j+1] = -1){
//                     if(nums[arr[j]]<nums[arr[j+1+count] && j<nums.size()-1-count]){
//                         count++;
//                     }
//                 } else if(nums[arr[j]]<nums[arr[j+1]]){
                    
//                 }
//             }
//         }
    //     int temp;
    //     bool flag = true;
    //     for(int i = 0; i<nums.size(); i++){
    //         temp = -1;
    //         flag=true;
    //         for(int j = 0; j<nums.size(); j++){
    //             if(i<j && nums[i]>nums[j]){
    //                 int temp = i;
    //                 break;
    //             } else if(i>j && nums[i]<nums[j]){
    //                 int temp = i;
    //                 break;
    //             }
    //         }
    //         for(int j = 0; j<nums.size()-1; j++){
    //             if(nums[j]>nums[j+1] && j!=temp){
    //                 flag = false;
    //                 break;
    //             }
    //             if(j==temp-1){
    //                 if(nums[j]>nums[j+2]){
    //                     flag = false;
    //                     break;
    //                 }
    //             }
    //         }
    //         if(flag) return true;
    //     }
    //     return false;
        int count = 0;
        for(int i = 0; i<nums.size()-1; i++){
            if(nums[i]>=nums[i+1]){
                if(nums[i]>nums[i-1] && i>0){
                    nums[i+1] = nums[i];
                    cout<<nums[i]<<" "<<nums[i+1]<<" "<<count<<"\n";
                } else {
                    nums[i] = nums[i+1];
                     cout<<"else"<<nums[i]<<" "<<nums[i+1]<<" "<<count<<"\n";
                }
                count++;
            }
            if(count > 1) return false;
        }
        return true;
    }
};

int main(){
	Solution s;
	vector<int> v = {1,1,1};
	cout<<s.canBeIncreasing(v);
	return 0;
}