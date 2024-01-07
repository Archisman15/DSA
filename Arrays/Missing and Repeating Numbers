//Optimal Approach #1 using Maths
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    long long n=a.size();
    long long sN=(n*(n+1))/2;
    long long sN2=(n*(n+1)*(2*n+1))/6;
    long long S=0, S2=0;
    for (int i = 0; i < n; i++) {
      S += a[i];
      S2 += (a[i] * a[i]);
    }
    long long diff1 = sN - S;      // diff1=Q-P
    long long diff2 = sN2 - S2;    // diff2=Q2-P2
    long long add = diff2 / diff1; // add=Q+P
    int q = (diff1 + add) / 2;
    int p = add - q;
    return {p,q};
}


//Optimal Approach #2 using XOR
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    int n=a.size();
    int xr=0;
    for(int i=0;i<n;i++){
      xr=xr^a[i];
      xr=xr^(i+1);
    }
    int bitNo=0;
    while(1){
      if((xr&(1<<bitNo))!=0)
        break;
      bitNo++;
    }
    int one=0;
    int zero=0;
    for(int i=0;i<n;i++){
      if((a[i]&(1<<bitNo))!=0)
        one=one^a[i];
      else
        zero=zero^a[i];
    }
    for(int i=1;i<=n;i++){
      if((i&(1<<bitNo))!=0)
        one=one^i;
      else
        zero=zero^i;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
      if(zero==a[i])
        cnt++;
    }
    if(cnt==2)
      return {zero,one};
    else
      return {one, zero};
}
