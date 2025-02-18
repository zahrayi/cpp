#include <iostream>
using namespace std;
int jam(int x)
{
	if(x<10)
	{
		return x;
	}
	else
	{
		int s=0;
		while(x>0)
		{
			s=s+x%10;
			x=x/10;
		}
		return s;
	}
}
int main()
{
	int n;
	cin>>n;
	while( s>10 )
	{
		jam(n)
	}
	cout<<s;
}
