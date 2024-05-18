#include <bits/stdc++.h>
void helper(int i, int k, int n, vector<int> &subSet, vector<vector<int>> &ans){
    if(k==0){
        ans.push_back(subSet);
        return;
    }
    if(i>n || k>(n-i+1))
        return;
    subSet.push_back(i);
    helper(i+1,k-1,n,subSet,ans);
    subSet.pop_back();
    helper(i+1,k,n,subSet,ans);
} 
vector<vector<int>> combinations(int n, int k)
{
    vector<int> subSet;
    vector<vector<int>> ans;
    helper(1,k,n,subSet,ans);
    return ans;
}
