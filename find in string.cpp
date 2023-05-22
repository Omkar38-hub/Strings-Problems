#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str="geeksforgeeks";
	cout<<str.find("eek")<<endl;
	if(str.find("zs")==string::npos)
	  cout<<"Not found\n";
	cout<<str.substr(5)<<endl;
	return 0;
}
