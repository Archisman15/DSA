//Optimal Solution #1
#include<vector>
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	int n=a.size();
	int m=b.size();
	int i=n-1;
	int j=0;
	while(i>=0 && j<m){
		if(a[i]>=b[j]){
			swap(a[i],b[j]);
			i--;
			j++;
		}
		else
			break;
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
}


//Optimal Solution #2
#include<vector>
void swapGreater(vector<long long> &a, vector<long long> &b, int ind1, int ind2){
	if(a[ind1]>b[ind2])
		swap(a[ind1],b[ind2]);
}
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	int n=a.size();
	int m=b.size();
	int len=n+m;
	int gap=(len/2)+(len%2);
	while(gap>0){
		int left=0;
		int right=gap;
		while(right<len){
			if(left<n && right>=n){
				swapGreater(a,b,left,right-n);
			}
			else if(left>=n){
				swapGreater(b,b,left-n,right-n);
			}
			else{
				swapGreater(a,a,left,right);
			}
			left++;
			right++;
		}
		if(gap==1)
			break;
		gap=(gap/2)+(gap%2);
	}
}
