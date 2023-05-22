#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
	if(n==1||n==0)
	  return 1;
	return n*factorial(n-1);
}
int lexi(string s)
{
	 int n=s.length();
	 int fact=factorial(n);
	 int count[256];
	 fill(count,count+256,0);
	 int result=1;
	 for(int i=0;i<n;i++)
	 {
	 	count[s[i]]++;
	 }
	 for(int i=1;i<256;i++)
	 {
	 	count[i]=count[i]+count[i-1];
	 }
	 for(int i=0;i<n;i++)
	 {
	 	fact=fact/(n-i);
	 	result=result+count[s[i]-1]*fact;
	 	for(int j=s[i];j<256;j++)
	 	   count[j]--;
	 }
	 return result;
}
int main()
{
	string s="STRING";
	cout<<"The lexicographical rank of "<<s<<" is "<<lexi(s);
	return 0;
}
//Time complexity O(n)
//Auxilary Space is O(CHAR)
