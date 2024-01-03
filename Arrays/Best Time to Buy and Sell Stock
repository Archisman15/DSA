#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n=prices.size();
    int currProfit=0;
    int mini=prices[0];
    for(int i=1;i<n;i++){
        currProfit=max(prices[i]-mini,currProfit);
        mini=min(mini,prices[i]);
    }
    return currProfit;
}
