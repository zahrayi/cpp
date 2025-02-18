#include <iostream>
using namespace std;
int main()
{
	int array [10];
	int sum=0;
	for(int i=0;i<10;i++)
	{
		cin>>array[i];
	}
	for(int i=0; i<10; i++)
	{
		sum=array[i]+sum;
	}
	cout<<sum/10;
	
	
	 return 0;
}