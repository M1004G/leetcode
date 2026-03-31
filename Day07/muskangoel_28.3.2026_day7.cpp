#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int small1 = INT_MAX;
        int small2 = INT_MAX;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]<=small1){
                small1=nums[i];
            }
            else if(nums[i]<=small2){
                small2=nums[i];
            }
            else{
                return true;
            }
            
        }
        return false;
    }
};