#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,i;
		cin>>s1;
		int y= s1.size();
			if(s1[y-1]%2==0)
			{
				cout<<"even\n";
			}
			else
			{
				cout<<"odd\n";
			}
	}
	return 0;
}