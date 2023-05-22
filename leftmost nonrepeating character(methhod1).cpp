#include<bits/stdc++.h>
using namespace std;

int non_repeat(string str)
{
	int n=str.length();
	bool flag=true;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(str[i]==str[j])
			{
				flag=false;
			}
		}
		if(flag)
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
// time complexity=O(n^2)
