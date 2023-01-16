#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,k=0;
	for(i=1000;i>0;i--)
	{
		cout<<i<<" ";
		k++;
		if(k==5)
		{
			cout<<endl;
			k=0;
		}
	}
	return 0;
}