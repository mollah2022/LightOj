#include<bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
	int t;
	double area=0;
	cin >> t;
	while(t--)
	{
		int x,y,z;
		cin >> x >> y >> z;
		double p = (x+y+z)/2.0;
         area=sqrt(p*(p-x)*(p-y)*(p-z));
     cout <<fixed;
    cout <<setprecision(3);
    cout<<"Area = " << area<<endl;
	}
	return 0;
}