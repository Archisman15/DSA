#include<bits/stdc++.h>
void helper(int i, int B, int sumTillNow, vector<int> ARR, vector<int> &subSet, vector<vector<int>> &ans){
    if(sumTillNow==B){
        ans.push_back(subSet);
        return;
    }
    if(i>=ARR.size() || sumTillNow>B)
        return;
    helper(i+1,B,sumTillNow,ARR,subSet,ans);
    sumTillNow+=ARR[i];
    subSet.push_back(ARR[i]);
    helper(i,B,sumTillNow,ARR,subSet,ans);
    sumTillNow-=ARR[i];
    subSet.pop_back();
}
vector<vector<int>> combSum(vector<int> &ARR, int B)
{
    vector<int> subSet;
    vector<vector<int>> ans;
    sort(ARR.begin(),ARR.end());
    helper(0,B,0,ARR,subSet,ans);
    return ans;
}
