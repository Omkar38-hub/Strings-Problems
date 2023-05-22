#include<bits/stdc++.h>
using namespace std;

int non_repeat(string str)
{
	int n=str.length();
	int count[256]={0};
	for(int i=0;i<n;i++)
	{
		count[str[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		if(count[str[i]]==1)
		  return i;
	}
	return -1;
}
int main()
{
	string str="abbc";
	cout<<"The index of leftmost non-reapeting character is "<<non_repeat(str)<<endl;
	return 0;
}

//time complexity =O(n)
