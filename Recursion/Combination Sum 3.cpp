void helper(int i, int k, int sumTillNow, int n, vector<int> &subSet, vector<vector<int>> &ans){
    if(k<0)
        return;
    if(sumTillNow==n){
        if(k==0)
            ans.push_back(subSet);
        return;
    }
    if(i==10)
        return;
    sumTillNow+=i;
    subSet.push_back(i);
    helper(i+1,k-1,sumTillNow,n,subSet,ans);
    sumTillNow-=i;
    subSet.pop_back();
    helper(i+1,k,sumTillNow,n,subSet,ans);
}
vector<vector<int>> combinationSum(int k, int n) {
    vector<int> subSet;
    vector<vector<int>> ans;
    helper(1,k,0,n,subSet,ans);
    return ans;
}
