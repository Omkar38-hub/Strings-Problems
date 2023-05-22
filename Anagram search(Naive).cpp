#include<bits/stdc++.h>
using namespace std;

bool find(string txt,string pat,int i)
{
	int count[256];
	fill(count,count+256,0);
	for(int j=0;j<pat.length();j++)
	{
		count[pat[j]]++;
		count[txt[i+j]]--;
	}
	for(int j=0;j<256;j++)
	{
		if(count[j]!=0)
		  return false;
	}
	return true;
}
bool anagram(string txt,string pat)
{
	int n=txt.length();
	int m=pat.length();
	for(int i=0;i<n;i++)
	{
		if(find(txt,pat,i))
		  return true;
	}
	return false;
}
int main()
{
	string txt="geeksforgeeks";
	string pat="frog";
	cout<<"Is the anagram search is succesfull or not? ";
	if(anagram(txt,pat))
	  cout<<"YES\n";
	else
	  cout<<"NO\n";
	return 0;
}
// time complexity is O(n^2)
