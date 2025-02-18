#include <iostream>
using namespace std;
int main()
{
	int array [2];
	for(int i=0; i<2;i++)
	{
		cin>>array[i];
	}
	for(int i=0; i<2; i++)
	{
		int a=1;
		for(int j=0; j<3; j++)
		{
			a=a*array[i];
		}
		cout<<a<<endl;
	}
	
	return 0;
}