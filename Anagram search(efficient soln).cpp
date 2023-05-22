#include<bits/stdc++.h>
using namespace std;

bool same(int ct[],int pt[])
{
	
	for(int i=0;i<256;i++)
	{
		if(ct[i]!=pt[i])
		  return false;
	}
	return true;
}
bool anagram(string txt,string pat)
{
	int n=txt.length();
	int m=pat.length();
	int pt[256];
	fill(pt,pt+256,0);
	int ct[256];
	fill(ct,ct+256,0);
	for(int i=0;i<m;i++)
	{
		pt[pat[i]]++;
		ct[txt[i]]++;
	}
	for(int i=m;i<n;i++)
	{
		if(same(ct,pt))
		  return true;
		ct[txt[i]]++;
		ct[txt[i-m]]--;
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
// time complexity is O(n)
