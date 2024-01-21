#include <bits/stdc++.h> 
long long Pow(int X, int N)
{
    if(N==0)
        return 1;
    return (long long)X*Pow(X,N-1);
}
