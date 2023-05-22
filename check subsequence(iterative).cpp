#include<bits/stdc++.h>
using namespace std;

bool subseq(string s1,string s2)
{
	int n=s1.length();
	int m=s2.length();
	int j=0;
	for(int i=0;i<n,j<m;i++)
	{
		if(s1[i]==s2[j])
		   j++;
	}
	return (j==m);
}
int main()
{
	string s1="ABCDEF";
	string s2="ADE";
	cout<<"The string "<<s2<<" is subsequence of string "<<s1<<" or not? ";
	if(subseq(s1,s2))
	  cout<<"YES";
	else
	   cout<<"NO";
	return 0;
}
