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
	    int p = sqrt(x);
	    if((p*p)==x)
	    {
	    	cout<<"YES\n";
	    }
	    else
	    {
	    	cout<<"NO\n";
	    }
	}
	return 0;
}