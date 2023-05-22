#include<bits/stdc++.h>
using namespace std;

int longest(string str)
{
	int res=0;
	int i=0;
	int prev[256];
	fill(prev,prev+256,-1);
	for(int j=0;j<str.length();j++)
	{
		i=max(i,prev[str[j]]+1);
		int maxEnd=j-i+1;
		res=max(res,maxEnd);
		prev[str[j]]=j;
	}
	return res;
}
int main()
{
	string str="abaacdbab";
	cout<<"The longest substring in "<<str<<" with distict characters is "<<longest(str);
	return 0;
}
// time complexity is O(n)
