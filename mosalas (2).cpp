#include <iostream>
using namespace std;
int main()
{
	int z;
	int a,f,d;
	cin>>z;
	for (a=1;a<=z;a++)
	{
		for(f=z-1;f>=a;f--)
		{
			cout<<" ";
		}
		for(d=1;d<=(2*a-1);d++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}