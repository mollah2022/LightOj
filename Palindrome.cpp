#include<bits/stdc++.h>
#include <algorithm> 
using namespace std;

int main()
{
	int t,i,flag=0;
	cin >> t;
	string s2;
	while(t--)
	{
		string s1;
		cin >> s1;
		reverse(s1.begin(),s1.end());
		int l=s1.size();
		for(int i=0;i<l;i++)
		{
			if(s1[i]!=s1[l-i-1])
			{
				flag=1;
				break;
			}

		}
		if(flag==1)
		{
			cout<<"Sorry! It is not palindrome!\n";
		}
		else
		{
			cout<<"Yes! It is palindrome!\n";
		}
		flag=0;

	}
	return 0;
}