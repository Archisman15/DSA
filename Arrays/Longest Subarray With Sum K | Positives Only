int longestSubarrayWithSumK(vector<int> a, long long k) {
    int i=0;
    int j=0;
    int n=a.size();
    long long sum=a[i];
    int longestSub=0;
    while(j<n){
        while(sum>k && i<=j){
            sum-=a[i];
            i++;
        }
        if(sum==k){
            longestSub=max(longestSub,j-i+1);
        }
        j++;
        sum+=a[j];
    }
    return longestSub;
}
