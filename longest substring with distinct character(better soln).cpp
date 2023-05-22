#include<bits/stdc++.h>
using namespace std;

int longest(string str)
{
	int res=0;
	for(int i=0;i<str.length();i++)
	{
		bool visited[256];
     	memset(visited,false,sizeof(visited));
		for(int j=i;j<str.length();j++)
		{
			if(visited[str[j]])
			  break;
			else
			{
				res=max(res,j-i+1);
				visited[str[j]]=true;
			}
		}
	}
	return res;
}
int main()
{
	string str="abaacdbab";
	cout<<"The longest substring in "<<str<<" with distict characters is "<<longest(str);
	return 0;
}
// time complexity is O(n^2)
