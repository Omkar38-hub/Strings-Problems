#include<bits/stdc++.h>
using namespace std;

bool subseq(string s1,string s2,int n,int m)
{
	if(m==0)
	  return true;
	if(n==0)
	  return false;
	if(s1[n-1]==s2[m-1])
	   return subseq(s1,s2,n-1,m-1);
	else
	   return subseq(s1,s2,n-1,m);
}
int main()
{
	string s1="ABCDEF";
	string s2="ADE";
	int n=s1.length();
	int m=s2.length();
	cout<<"The string "<<s2<<" is subsequence of string "<<s1<<" or not? ";
	if(subseq(s1,s2,n,m))
	  cout<<"YES";
	else
	   cout<<"NO";
	return 0;
}
