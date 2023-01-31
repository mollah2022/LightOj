#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x,i,count=0;
		cin >> x;
		for( int i = 5;i <= x;i*=5)
		{
          count+=x/i;
		}
		cout<<count<<endl;
	}
	return 0;
}