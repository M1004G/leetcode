#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // vector<int> ans(nums.size(), 0);
        // int prod=1;
        // int prod2=1;
        // int cnt=0;
        // for(int i=0; i<nums.size(); i++){
        //     prod*=nums[i];
        //     if(nums[i]!=0) prod2*=nums[i];
        //     if(nums[i]==0) cnt++;
        // }
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i]!=0) ans[i]=prod/nums[i];
        //     if(nums[i]==0 && cnt==1) ans[i]=prod2;
        // }
        // return ans; //not acceptable because this uses division operation
        
        
        // vector<int> left(nums.size(), 1);
        // vector<int> right(nums.size(), 1);
        // vector<int> result(nums.size(), 0);
        // int prefix=1, suffix=1;
        // for(int i=1; i<nums.size(); i++){
        //     left[i]=nums[i-1]*left[i-1];
        // }
        // for(int i=nums.size()-2; i>=0; i--){
        //     right[i]=nums[i+1]*right[i+1];
        // }
        // for(int i=0; i<nums.size(); i++){
        //     result[i]=left[i]*right[i];
        // }
        // return result;


        vector<int> result(nums.size(), 1);
        for(int i=1; i<nums.size(); i++){
            result[i]=nums[i-1]*result[i-1];
        }
        int rightprod=1;
        for(int i=nums.size()-1; i>=0; i--){
            result[i]*=rightprod;
            rightprod*=nums[i];
        }
        return result;


    }
};