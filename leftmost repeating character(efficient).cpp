#include<bits/stdc++.h>
using namespace std;

int repeat(string str)
{
	int n=str.length();
	int count[256];
	fill(count,count+256,-1);
	int res=INT_MAX;
	for(int i=0;i<n;i++)
	{
		int f=count[str[i]];
		if(f==-1)
		   count[str[i]]=i;
		else
		   res=min(res,f);
	}
	return (res==INT_MAX)?-1:res;
}
int main()
{
	string str="abbc";
	cout<<"The index of leftmost reapeting character is "<<repeat(str)<<endl;
	return 0;
}

//time complexity =O(n)
