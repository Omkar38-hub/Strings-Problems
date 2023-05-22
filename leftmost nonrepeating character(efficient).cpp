#include<bits/stdc++.h>
using namespace std;

int non_repeat(string str)
{
	int n=str.length();
	int count[256];
	fill(count,count+256,-1);
	for(int i=0;i<n;i++)
	{
		int f=count[str[i]];
		if(f==-1)
		   count[str[i]]=i;
		else
		   count[str[i]]=-2;
	}
	int res=INT_MAX;
	for(int i=0;i<256;i++)
	{
		if(count[i]>=0)
		  res=min(res,count[i]);
	}
	return (res==INT_MAX)?-1:res;
}
int main()
{
	string str="abbc";
	cout<<"The index of leftmost non-reapeting character is "<<non_repeat(str)<<endl;
	return 0;
}

//time complexity =O(n)
