//Brute Force Approach
#include<vector>
int getSingleElement(vector<int> &arr){
	for(auto it:arr){
		int freq=0;
		for(auto it2:arr)
			if(it==it2)
				freq++;
		if(freq==1)
			return it;
	}	
}

//Better Approach
#include<vector>
#include<map>
int getSingleElement(vector<int> &arr){
	int n=arr.size();
	map<int,int> mpp;
	for(int i=0;i<n;i++)
		mpp[arr[i]]++;
	for(auto it: mpp)
		if(it.second==1)
			return it.first;	
}

//Optimal Approach
#include<vector>
int getSingleElement(vector<int> &arr){
	int s=0;
	for(auto it:arr)
		s^=it;
	return s;	
}
