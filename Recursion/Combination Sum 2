#include<bits/stdc++.h>
void helper(int i, int n, int sum, vector<int> &arr, int target, vector<int> &subSet, vector<vector<int>> &ans){	
	if(sum==target){
		ans.push_back(subSet);
		return;
	}
	if(i==n || sum>target)
		return;

	subSet.push_back(arr[i]);
	sum+=arr[i];
	helper(i+1,n,sum,arr,target,subSet,ans);
	subSet.pop_back();
	sum-=arr[i];
	while(i+1<n && arr[i]==arr[i+1])
		i++;
	helper(i+1,n,sum,arr,target,subSet,ans);
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target){
	vector<int> subSet;
	vector<vector<int>> ans;
	sort(arr.begin(),arr.end());
	helper(0,n,0,arr,target,subSet,ans);
	return ans;
}
