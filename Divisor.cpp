#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		int x;
		cin>>x;
		while(x%j!=0)
		{
			if(x%j==0)
			{
			cout<<"Case i: "<<j<<" ";
		    }
			j++;
		}
	}
	return 0;
}