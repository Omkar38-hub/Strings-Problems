#include<bits/stdc++.h>
using namespace std;

string wordReverse(string str)
{
	int n=str.length();
	stack<string>st;
	string s="";
	for(int i=0;i<n;i++)
	{
		if(str[i]==' ')
		{
			st.push(s);
			s="";
		}
		else
		{
			s=s+str[i];
		}
	}
	st.push(s);
	string res=st.top();
	st.pop();
	while(!st.empty())
	{
		res+=" ";
		res+=st.top();
		st.pop();
	}
	return res;
}
int main()
{
	string str;
	cout<<"Enter the String\n";
	getline(cin,str);
	cout<<"The length of string is "<<str.length()<<endl;
	cout<<str<<endl;
	cout<<"The reversed word of string is "<<wordReverse(str)<<endl;
	return 0;
}
