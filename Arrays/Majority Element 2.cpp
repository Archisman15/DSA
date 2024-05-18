vector<int> majorityElement(vector<int> v) {
	int n=v.size();
	int cnt1=0;
	int cnt2=0;
	int el1=INT_MIN;
	int el2=INT_MIN;
	for(int i=0;i<n;i++){
		if(cnt1==0 && el2!=v[i]){
			cnt1=1;
			el1=v[i];
		}
		else if(cnt2==0 && el1!=v[i]){
			cnt2=1;
			el2=v[i];
		}
		else if(el1==v[i])
			cnt1++;
		else if(el2==v[i])
			cnt2++;
		else{
			cnt1--;
			cnt2--;
		}
	}
	cnt1=cnt2=0;
	for(auto it:v){
		if(it==el1)
			cnt1++;
		if(it==el2)
			cnt2++;
	}
	int mini=(n/3)+1;
	vector<int>ans;
	if(cnt1>=mini)
		ans.push_back(el1);
	if(cnt2>=mini)
		ans.push_back(el2);
	sort(ans.begin(),ans.end());
	return ans;
}
