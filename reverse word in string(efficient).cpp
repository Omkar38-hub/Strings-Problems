#include<bits/stdc++.h>
using namespace std;

void wordReverse(string &str)
{
	int n=str.length();
	int start=0;
	for(int end=0;end<n;end++)
	{
		if(str[end]==' ')
		{
			reverse(str.begin()+start,str.begin()+end);
			start=end+1;
		}
	}
	reverse(str.begin()+start,str.end());
	reverse(str.begin(),str.end());
}
int main()
{
	string str;
	cout<<"Enter the String\n";
	getline(cin,str);
	cout<<"The reversed word of string is ";
	wordReverse(str);
	cout<<str<<endl;
	return 0;
}
