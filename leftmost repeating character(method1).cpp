#include<bits/stdc++.h>
using namespace std;

int repeat(string str)
{
	int n=str.length();
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(str[i]==str[j])
			{
				return i;
			}
		}
	}
	return -1;
}
int main()
{
	string str="abbc";
	cout<<"The index of leftmost reapeting character is "<<repeat(str)<<endl;
	return 0;
}
// time complexity=O(n^2)
