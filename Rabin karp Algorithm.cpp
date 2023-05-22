#include<bits/stdc++.h>
using namespace std;
void RCalgo(string txt,string pat)
{
	int n=txt.length();
	int m=pat.length();
	int d=256,q=101;
	//compute d^(m-1)
	int h=1;
	for(int i=1;i<m;i++)
	{
		h=(h*d)%q;
	}
	int p=0,t=0;
	for(int i=0;i<m;i++)
	{
		p=(p*d+pat[i])%q;
		t=(t*d+txt[i])%q;
	}
	for(int i=0;i<=n-m;i++)
	{
		if(p==t)
		{
			int j;
			for(j=0;j<m;j++)
			{
				if(pat[j]!=txt[i+j])
				{
					break;
				}
			}
			if(j==m)
			  cout<<i<<" ";
		}
		if(i<n-m)
		{
			t=(d*(t-txt[i]*h)+txt[i+m])%q;
			if(t<0)
			  t=t+q;
		}
	}
}
int main()
{
	string txt="abdabcbabc";
	string pat="abc";
	cout<<"The index where the pattern found is ";
	RCalgo(txt,pat);
	return 0;
}
// time complexity is O((n-m+1)*m)
