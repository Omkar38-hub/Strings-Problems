#include<bits/stdc++.h>
using namespace std;

void LPS(string str,int v[])
{
	v[0]=0;
	int i=1,len=0;
	while(i<str.length())
	{
		if(str[i]==str[len])
		{
			len++;
			v[i]=len;
			i++;
		}
		else
		{
			if(len==0)
			{
				v[i]=0;
				i++;
			}
			else
			{
				len=v[len-1];
			}
		}
	}
}
void KMP(string txt,string pat)
{
	int n=txt.length();
	int m=pat.length();
	int lps[n];
	LPS(pat,lps);
	int i=0,j=0;
	while(i<n)
	{
		if(txt[i]==pat[j])
		{
			i++;
			j++;
		}
		if(j==m)
		{
			cout<<(i-m)<<" ";
			j=lps[j-1];
		}
		else if(i<n && txt[i]!=pat[j])
		{
			if(j==0)
			 i++;
			else
			{
				j=lps[j-1];
			}
		}
	}
}
int main()
{
	string txt="ababcababaad";
	string pat="ababa";
	cout<<"The Index at which the pattern present is ";
	KMP(txt,pat);
	return 0;
}

// time complexity = O(n)
