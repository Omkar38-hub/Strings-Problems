#include<bits/stdc++.h>
using namespace std;
int fillLps(string s,int n)
{
	for(int len=n-1;len>=0;len--)
	{
		bool flag=true;
		for(int i=0;i<len;i++)
		{
			if(s[i]!=s[n-len+i])
			  flag=false;
		}
		if(flag)
		  return len;
	}
	return 0;
}
vector<int>LPS(string str)
{
	vector<int>v;
	for(int i=0;i<str.length();i++)
	{
		v.push_back(fillLps(str,i+1));
	}
	return v;
}
int main()
{
	string str="abacabad";
	vector<int>v=LPS(str);
	cout<<"The LPS of given string "<<str<<" is\n";
	for(auto x: v)
	   cout<<x<<" ";
	return 0;
}

// time complexity = O(n^3)
