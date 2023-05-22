#include<bits/stdc++.h>
using namespace std;
bool distinct(string str,int i,int j)
{
	bool visited[256];
	memset(visited,false,sizeof(visited));
	for(int k=i;k<=j;k++)
	{
		if(visited[str[k]])
		  return false;
		visited[str[k]]=true;
	}
	return true;
}
int longest(string str)
{
	int res=0;
	for(int i=0;i<str.length();i++)
	{
		for(int j=0;j<str.length();j++)
		{
			if(distinct(str,i,j))
			   res=max(res,j-i+1);
		}
	}
	return res;
}
int main()
{
	string str="abaacdbab";
	cout<<"The longest substring in "<<str<<" with distict characters is "<<longest(str);
	return 0;
}
// time complexity is O(n^3)
