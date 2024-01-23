#include <bits/stdc++.h> 
void creator(int i, vector<int> &subSet, vector<vector<int>> &ans, vector<int> arr, int n){
    if(i==n){
        ans.push_back(subSet);
        return;
    }
    else{
        subSet.push_back(arr[i]);
        creator(i+1,subSet,ans,arr,n);
        subSet.pop_back();
        while(i+1<n && arr[i]==arr[i+1])
            i++;
        creator(i+1,subSet,ans,arr,n);
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    vector<int> subSet;
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    creator(0,subSet,ans,arr,n);
    sort(ans.begin(),ans.end());
    return ans;
}
