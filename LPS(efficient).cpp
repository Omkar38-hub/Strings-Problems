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
int main()
{
	string str="abacabad";
	int v[str.length()];
	LPS(str,v);
	cout<<"The LPS of given string "<<str<<" is\n";
	for(auto x: v)
	   cout<<x<<" ";
	return 0;
}

// time complexity = O(n)
