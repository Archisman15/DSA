vector<int> superiorElements(vector<int>&a) {
    int n=a.size();
    int maxi=0;
    vector<int> ans;
    for(int i=n-1;i>=0;i--){
        if(a[i]>maxi){
            maxi=a[i];
            ans.push_back(maxi);
        }
    }
    return ans;
}
