#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i=0;
	cin >> t;
	while(t--)
	{
		int s1[100],s2[100],s3[100];
		while(cin>>s1[i]>>s2[i])
		{
			i++;
			for(i=0;i<100;i++)
			{
				s3[i]=s1[i]+s2[i];
			}
			for(i=0;i<100;i++)
			{
				cout<<s3[i]<<endl;
			}
		}
	}
	return 0;
}