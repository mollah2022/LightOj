#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x,i,j,y;
		cin >> x >> y;
		for(i = 1;i <= x;i++)
		{
			for(j = 1;j <= i;j++)
			{
                cout<<y<<" ";
			}
			cout<<endl;
		}
		for(i=x-1;i>0;i--)
		{
			for(j=1;j<=i;j++)
			{
				cout<<y<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}