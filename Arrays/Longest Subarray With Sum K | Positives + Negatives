#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    int n=nums.size();
    map<long long, int> preSumMap;
    int maxLen=0;
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum==k)
            maxLen=max(maxLen,i+1);
        long long remSum=sum-k;
        if(preSumMap.find(remSum)!=preSumMap.end()){
            int len=i-preSumMap[remSum];
            maxLen=max(maxLen,len);
        }
        if(preSumMap.find(sum)==preSumMap.end())
            preSumMap[sum]=i;
    }
    return maxLen;
}
