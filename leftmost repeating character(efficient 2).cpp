#include<bits/stdc++.h>
using namespace std;

int repeat(string str)
{
	int n=str.length();
	bool visited[256];
	memset(visited,sizeof(visited),false);
	int res=-1;
	for(int i=n-1;i>=0;i--)
	{
		if(visited[str[i]])
		  res=i;
		else
		  visited[str[i]]=true;
	}
	return res;
}
int main()
{
	string str="abbc";
	cout<<"The index of leftmost reapeting character is "<<repeat(str)<<endl;
	return 0;
}

//time complexity =O(n)
