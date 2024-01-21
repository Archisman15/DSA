bool checkPalin(string &s, int i, int j){
	if(i>=j)
		return true;
	else if(s[i]!=s[j])
		return false;
	return checkPalin(s,i+1,j-1);
}
bool isPalindrome(string &s)
{
	return checkPalin(s,0,s.size()-1);
}
