#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxc=0;
        int n=prices.size();
        int smallest=prices[0];
        for(int i=1; i<n; i++){
            if(prices[i]<smallest){
                smallest=prices[i];
            }
            else{
                int profit=prices[i]-smallest;
                maxc=max(maxc, profit);
            }
            
        }
        return maxc;
    }
};