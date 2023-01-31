#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x,count=0;
		cin >> x;
		if(x>1)
		{
		for(int i =1 ;i <= x;i++)
		{
			if(pow(2,i)==x)
			{
				count++;
				break;
			}
		}
		if(count==1)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
	else
	{
		cout<<"YES\n";
	}
	
	}
	return 0;
}