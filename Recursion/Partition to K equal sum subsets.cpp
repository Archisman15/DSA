bool helper(int i, int bucketNum, int bucketSum, int reqSum, int K, int n, vector<int> &nums, vector<int> &alreadyPicked){
    if(bucketNum==K+1)
        return true;
    if(bucketSum==reqSum)
        return helper(0,bucketNum+1,0,reqSum,K,n,nums,alreadyPicked);
    if(bucketSum>reqSum)
        return false;
    if(i>=n)
        return false;
    if(alreadyPicked[i]==1)
        return helper(i+1,bucketNum,bucketSum,reqSum,K,n,nums,alreadyPicked);
    else{
        bucketSum+=nums[i];
        alreadyPicked[i]=1;
        bool op1=helper(i+1,bucketNum,bucketSum,reqSum,K,n,nums,alreadyPicked);

        bucketSum-=nums[i];
        alreadyPicked[i]=0;
        bool op2=helper(i+1,bucketNum,bucketSum,reqSum,K,n,nums,alreadyPicked);

        return op1 | op2;
    }
}
bool canPartitionKSubsets(vector<int>& nums, int n, int K)
{
    vector<int> alreadyPicked(n,0);
    int sum=0;
    for(auto it:nums)
        sum+=it;
    if(sum%K!=0)
        return false;
    return helper(0,1,0,sum/K,K,n,nums,alreadyPicked);

}
