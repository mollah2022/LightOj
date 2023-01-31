#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x;
		cin >> x;
		int temp=0,rev=0,rem=0;
		temp=x;
		while(temp>0)
		{
			rem=temp%10;
			rev=rev*10+rem;
			temp=temp/10;

		}
		cout<<rev<<endl;
	}
	return 0;
}