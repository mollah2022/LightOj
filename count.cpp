#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int count=1;
		string s1;
		cin>>s1;
		int k=0;
		k= s1.length();
		for(int i=0;i<k;i++)
		{
			if(s1[i]==' '&& s1[i+1]!=' ')
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}