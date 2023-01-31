#include<bits/stdc++.h>
#include <algorithm> 
using namespace std;

int main()
{
	int t,i,j;
	cin >> t;
	string s2;
	while(t--)
	{
		string s1;
		cin >> s1;
		reverse(s1.begin(),s1.end());
		cout<<s1<<endl;
	}
	return 0;
}