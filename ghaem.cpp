#include <iostream>
using namespace std;
int main()
{
	int a;
	int i,j,z;
	cin>>a;
	for(i=0;i<=a;i++)
	{
		for(j=a-1;j>=i;j--)
		{
			cout;" ";
		}
		for (z=1;z<=(2*i-1);z++)
		{
		cout<<"*";	
		}
		cout<< "\n";
	}
	return 0;
}