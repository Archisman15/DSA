int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    map<int,int> mpp;
    int preSum=0;
    int count=0;
    for(int i=0;i<arr.size();i++){
        preSum+=arr[i];
        if(preSum==k)
            count++;
        count+=mpp[preSum-k];
        mpp[preSum]++;
    }
    return count;
}
