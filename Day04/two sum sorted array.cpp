#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // pair<bool, int> found(vector<int>& numbers, int complement, int indx){
    //     int low=indx;
    //     int high=numbers.size()-1;
    //     while(low<=high){
    //         int mid=low+(high-low)/2;
    //         if(numbers[mid]==complement){
    //             return {true, mid};
    //         }
    //         else if(numbers[mid]<complement){
    //             low=mid+1;
    //         }
    //         else{
    //             high=mid-1;
    //         }
    //     }
    //     return {false, -1};
    // }
    // vector<int> twoSum(vector<int>& numbers, int target) {
    //     for(int i=0; i<numbers.size(); i++){
    //         int idx=i+1;
    //         int comp=target-numbers[i];
    //         auto ans=found(numbers, comp, idx);
    //         if(ans.first) {
    //             return {i+1,ans.second+1};
    //         }
    //     }
    //     return {-1, -1};
    // }
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right=numbers.size()-1;
        while(left<right){
            int sum=numbers[left]+numbers[right];
            if(sum==target){
                return {left+1, right+1};
            }
            else if(sum<target){
                left++;
            }
            else{
                right--;
            }
        }
        return {};

    }
};