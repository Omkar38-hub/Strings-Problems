#include<bits/stdc++.h>
using namespace std;

bool anagram(string s1,string s2)
{
	if(s1.length()!=s2.length())
	 return false;
	int count[256]={0};
	for(int i=0;i<s1.length();i++)
	{
		count[s1[i]]++;
		count[s2[i]]--;
	}
	for(int i=0;i<256;i++)
	{
		if(count[i]!=0)
		  return false;
	}
	return true;
}
int main()
{
	string s1="aabca";
	string s2="acaba";
	cout<<"The string "<<s1<<" and string "<<s2<<" are anagram or not? ";
	if(anagram(s1,s2))
	   cout<<"Yes\n";
	else
	   cout<<"No\n";
	return 0;
}
