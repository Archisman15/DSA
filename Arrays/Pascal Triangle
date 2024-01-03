vector<int> generateRows(int row){
    vector<int> ansRow;
    long long ans=1;
    ansRow.push_back(ans);
    for(int col=1;col<row;col++){
        ans*=(row-col);
        ans/=col;
        ansRow.push_back(ans);
    }
    return ansRow;
}
vector<vector<int>> pascalTriangle(int N) {
    vector<vector<int>> ansTriangle;
    for(int i=1;i<=N;i++)
        ansTriangle.push_back(generateRows(i));
    return ansTriangle;
}
