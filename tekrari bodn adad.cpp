#include <iostream>
using namespace std;
int main()
{
	int x[4];
	for(int i=0; i<4;i++)
	{
		cin>>x[i];
	for(int j=0; j < i; j++)
	{
		if(x[j]==x[i])
		{
			i=i-1;
			break;
		}
	}
}
	for(int i=0; i<4;i++)
	{
		cout<<x[i];
	}

}


