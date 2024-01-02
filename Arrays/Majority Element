//For Brute Force Approach you need to iterate over the array finding the frequency of every element

//For Better Approach you need to use a Hash Map

//Optimal Approach (Moore's Voting Algorithm)
int majorityElement(vector<int> v) {
	int n=v.size();
	int currEle;
	int track=0;
	for(int i=0;i<n;i++){
		if(track==0){
			track=1;
			currEle=v[i];
		}
		else if(currEle==v[i])
			track++;
		else
			track--;
	}
	int count=0;
	for(auto it:v)
		if(it==currEle)
			count++;
	if(count>n/2)
		return currEle;
	return -1;
}
