#include <bits/stdc++.h>
void genPe(int pos, vector<int>&arr, int n, vector<vector<int>> &ans){
	if(pos>=n)
		ans.push_back(arr);
	unordered_set<int> temp;
	for(int i=pos;i<n;i++){
		if(temp.find(arr[i])!=temp.end())
			continue;
		temp.insert(arr[i]);
		swap(arr[i],arr[pos]);
		genPe(pos+1, arr, n, ans);
		swap(arr[i],arr[pos]);
	}
} 
vector<vector<int>> uniquePermutations(vector<int> &arr, int n) {
	vector<vector<int>> ans;
	genPe(0,arr,n,ans);
	sort(ans.begin(),ans.end());
	return ans;
}
