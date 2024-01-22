#include<bits/stdc++.h>
void genPe(int pos, string &str, vector<string> &ans){
    if(pos>=str.size())
        ans.push_back(str);
    for(int i=pos;i<str.size();i++){
        swap(str[i],str[pos]);
        genPe(pos+1,str,ans);
        swap(str[i],str[pos]);
    }
}
vector<string> generatePermutations(string &str)
{
    vector<string> ans;
    genPe(0,str,ans);
    sort(ans.begin(),ans.end());
    return ans;
}
