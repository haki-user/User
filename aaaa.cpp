#include<bits/stdc++.h>
using namespace std;
// // class Solution {

// // public:
// //     vector<int> twoSum(vector<int>& nums, int target) {
// //         long long second;
// //         map<long long, long long> m;
// //         vector<int>ans;
// //         for(int i = 0; i<nums.size(); i++){
// //             second = target - nums[i];
// //             m.insert({nums[i],i});
// //             ans.push_back(i);
// //             cout<<"\nm"<<i<<": ";
// //             // for (auto z = m.begin(); z != m.end(); ++z)
// //             // {
// //             //     cout<< (*z).first;
// //             // }
// //             // cout<<m[second];
// //             //     if(m[second] && i>0){
// //             //         ans.push_back(i);
// //             //         cout<<m[second]<<"s\n";
// //             //         return ans;
// //             //     } else {
// //             //         cout<<"else";
// //             //         ans.pop_back();
// //             //     // }
// //         // }
// //             for(int j = i+1; j<nums.size(); j++){

// //             }
            
// //         }
// //         return ans;
// //     }
// // };

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         long long second;
//         map<int,int> m;
//         vector<int>ans;
//         for(int i = 0; i<nums.size(); i++){
//             second = target - nums[i];
//             m[nums[i]] = i+1;
//             // m.insert({nums[i],i});
//             cout<<"\nm"<<i<<": ";
//             ans.push_back(i);
//                         for (auto z = m.begin(); z != m.end(); ++z)
//             {
//                 cout<< (*z).first<<":"<<(*z).second<<" ";
//             }
//                 if(m[second] > 0){
//                     ans.push_back(m[second]-1);
//                     return ans;
//                 } else {
//                     cout<<"\nelse m2: "<<m[second]<<second;
//                     ans.pop_back();
//                 }
//             // }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        long long second;
        map<long long, long long> m;
        vector<int>ans;
        for(int i = 0; i<nums.size(); i++){
            second = target - nums[i];
            m[nums[i]] = i+1;
            ans.push_back(i);
            // for(int j = i+1; j<m.size(); j++){
                if(m[second] >0 && i>0 && i!=m[second]-1){
                    ans.push_back(m[second]-1);
                    return ans;
                } else {
                    cout<<"else"<<i<<" "<<m[second];
                    ans.pop_back();
                }
            // }
        }
        return ans;
    }
};

int main(){
	Solution S;
	vector<int> nums = {3,3};
	// nums.push_back(2);
	// nums.push_back(7);
    // for (int i = 0; i < nums.size(); ++i)
    // {
    //     cout<<nums[i];
    // }
	int target = 6;
	vector<int> a = S.twoSum(nums,target);
    for (int i = 0; i < a.size(); ++i)
    {
        cout<<a[i];
    }
	return 0;
}