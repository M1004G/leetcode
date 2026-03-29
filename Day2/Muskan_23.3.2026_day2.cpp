#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]<=0 || nums[i]>n){
                nums[i]=n+1;
            }
        }

        for(int i=0; i<n; i++){
            //for numbers lying between 1 to n+1 - which are the numbers we need to check for duplicates
            int val=abs(nums[i]);
            if(val>0 && val<=n){
                if(nums[val-1]>0){ //to prevent double negation marking index as positive in case of duplicates
                    nums[val-1]*=-1;
                }
            }
        }

        
        for(int i=0; i<n; i++){
            if(nums[i]>0){
                return i+1;
            }
        }
        return n+1;


        //explanation:
        // in this question we have to find numbers from 1 to n+1 that are missing, any number in the array that doesn't fall in this range is taken care of initially - so that we dont have to deal w it later --> it is marked as n+1
        // post this, we go through all nums[i] values that fall within given range, we take their absolute value because during marking their value may get hindered - and then we use indexes to mark their presence, for example if val=1, i will mark 0th index
        // the index which is left positive shows that number is missing
    }
};