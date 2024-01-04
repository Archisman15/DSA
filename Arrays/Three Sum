//Optimal
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1])
            continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int s=arr[i]+arr[j]+arr[k];
            if(s>0)
                k--;
            else if(s<0)
                j++;
            else{
                ans.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
                while(j<k && arr[j]==arr[j-1])
                    j++;
                while(j<k && arr[k]==arr[k+1])
                    k--;
            }
        }
    }
    return ans;
}
