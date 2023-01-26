#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,i,j,k;
	cin>>x;
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=x-i;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=2*i-1;k++)
		{
			cout<<"*";
		}
		cout<<endl;	
	}
  for(i=x;i>0;i--)
  {
  	for(j=1;j<=x-i;j++)
  	{
  		cout<<" ";
  	}
  	for(k=1;k<=2*i-1;k++)
  	{
  		cout<<"*";
  	}
  	cout<<endl;
  }

	return 0;
}