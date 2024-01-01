//Brute Force Approach
vector<int> rotateArray(vector<int>arr, int k) {
    vector<int> temp;
    int n=arr.size();
    k=k%n;
    for(int i=0;i<k;i++)
        temp.push_back(arr[i]);
    for(int i=k;i<n;i++)
        arr[i-k]=arr[i];
    for(int i=0;i<k;i++)
        arr[n-k+i]=temp[i];
    return arr;
}

//Optimal Approach
vector<int> rotateArray(vector<int>arr, int k) {
    k%=arr.size();
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
    return arr;
}
