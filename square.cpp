#include <iostream>
using namespace std;
int main()
{
	int a;
	int i,j;
	cin>> a;
	for(i=1;i<=a;i++)
	cout << "*";
	cout<< "\n";
	for(i=0;i<a-2;i++)
	{
		cout<<"*";
		for(j=0;j<a-2;j++)
		cout<<" ";
		cout<<"*\n";
		
		}
		for(i=0;i<a;i++)
		{
			cout<<"*";
		}
		return 0;
	}