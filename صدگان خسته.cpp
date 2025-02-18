#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	int z=x;
	int f=y;
	int a=0;
	int b=0;
	for(int i=0;i<3;i++)
	{
		a=a*10;
		a=a+(z%10);
		z=z/10;
	}
	
	for(int j=0;j<3;j++)
	{
		b=b*10;
		b=b+(f%10);
		f=f/10;
	}
	
	if(a==b)
	{
		cout<<x<< " = " <<y;
	}
	else if(a>b)
	{
		cout<<x<< " > " <<y;
	}
	else
	{
		cout<<y<< " > " <<x;
	}
	return 0;

}