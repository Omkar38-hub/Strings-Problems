#include<bits/stdc++.h>
using namespace std;

vector<int>Naive(string &txt,string &pat)
{
	int n=txt.length();
	int m=pat.length();
	vector<int>v;
	for(int i=0;i<=n-m;)
	{
		int j;
		for(j=0;j<m;j++)
		{
			if(pat[j]!=txt[i+j])
			  break;
		}
		if(j==m)
		  v.push_back(i);
		if(j==0)
		  i++;
		else
		  i=i+j;
	}
	return v;
}

int main()
{
	string txt="ABCABCD";
	string pat="ABCD";
	cout<<"The Indices of pattern found are ";
	vector<int>v=Naive(txt,pat);
	for(auto x: v)
	   cout<<x<<" ";
	return 0;
}

// time complexity O(n)
