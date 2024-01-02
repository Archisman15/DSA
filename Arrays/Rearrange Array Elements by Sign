vector<int> alternateNumbers(vector<int>&a) {
    vector<int> ans(a.size(),0);
    int even=0;
    int odd=1;
    for(auto it:a){
        if(it>0){
            ans[even]=it;
            even+=2;
        }
        else{
            ans[odd]=it;
            odd+=2;
        }
    }
    return ans;
}
