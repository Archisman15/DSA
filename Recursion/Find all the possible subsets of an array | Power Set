#include <bits/stdc++.h> 
void powerSet(vector<int>v,int i,vector<int>&subset,vector<vector<int>>&ans){
    if(i==v.size()){
        ans.push_back(subset);
        return;
    }
    subset.push_back(v[i]);
    powerSet(v,i+1,subset,ans);

    subset.pop_back();
    powerSet(v,i+1,subset,ans);
}
vector<vector<int>> pwset(vector<int>v)
{
    vector<vector<int>> ans;
    vector<int> subset;
    powerSet(v,0,subset,ans);
    return ans;
}
