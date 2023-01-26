#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,count=0;
	cin>>t;
	while(t--)
	{
	
	  string s1;
	  cin>>s1;
	  for(int i=0;i<s1.size();i++)
	  {
	  
	     if(s1[i]!=' ' && s1[i+1]==' ')
	     	count++;
	     	  }
         cout<<count<<endl;
       
	}
	
	return 0;
}