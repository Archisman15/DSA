//Brute Force Approach
string read(int n, vector<int> book, int target)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && book[i]+book[j]==target)
                return "YES";
        }
    }
    return "NO";
}

//Better Approach
#include <map>
string read(int n, vector<int> book, int target)
{
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        if(mpp.find(target-book[i])!=mpp.end())
            return "YES";
        mpp[book[i]]=i;
    }
    return "NO";
}

//Optimal Approach
string read(int n, vector<int> book, int target)
{
    int i=0;
    int j=book.size()-1;
    sort(book.begin(),book.end());
    while(i<j){
        if(book[i]+book[j]>target)
            j--;
        else if(book[i]+book[j]<target)
            i++;
        else
            return "YES";
    }
    return "NO";
}
