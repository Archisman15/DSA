//Brute Force Approach will be iterating over the array and then using linear search for every element and their successors

//Better Approach
int longestSuccessiveElements(vector<int>&a) {
    int n=a.size();
    int longest=1;
    int currLen=1;
    sort(a.begin(),a.end());
    for(int i=1;i<n;i++){
        if(a[i]-1==a[i-1]){
            currLen++;
            longest=max(longest,currLen);
        }
        else if(a[i]==a[i-1]){}
        else
            currLen=1;
    }
    return longest;
}

//Optimal Approach
#include <bits/stdc++.h>
int longestSuccessiveElements(vector<int>&a) {
    unordered_set<int> ele;
    int longest=1;
    int currLen=1;
    int nextEle;
    for(int i=0;i<a.size();i++)
        ele.insert(a[i]);
    for(auto it:ele){
        if(ele.find(it-1)==ele.end()){
            nextEle=it+1;
            while(ele.find(nextEle)!=ele.end()){
                nextEle++;
                currLen++;
            }
            longest=max(longest,currLen);
            currLen=1;
        }
    }
    return longest;
}
