int consecutiveOnes(vector<int>& arr){
    int maxOnes=0;
    int currMax=0;
    for(auto it:arr){
        if(it==1){
            currMax+=1;
            maxOnes=(currMax>maxOnes)?currMax:maxOnes;
        }
        else
            currMax=0;
    }
    return maxOnes;
}
