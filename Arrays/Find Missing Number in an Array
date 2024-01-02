//Optimal Solution #1
int missingNumber(vector<int>&a, int N) {
    int s=(N*(N+1))/2;
    int gs=0;
    for(auto it:a)
        gs+=it;
    return (s-gs);
}

//Optimal Solution #2
int missingNumber(vector<int>&a, int N) {
    int s=0;
    int gs=0;
    for(int i=0;i<N-1;i++){
        gs^=a[i];
        s^=(i+1);
    }
    s^=N;
    return (gs^s);
}
