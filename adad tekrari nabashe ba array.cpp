#include <iostream>
using namespace std;
int main()
{
	int const n=10;
	int array[10];
	for(int i=0; i<10;i++)
	{
		cin>>array[i];
	}
	for(int i=0; i<10;i++)
	{
	int low=0;
	int high=9;
	bool flag= false;
	while(low<=high)
	{
		int mid;
		mid=(low+high)/2;
		 if(array[i]==array[mid])
		 {
		 	flag=true;
		 }
		 else if(array[i]>array[mid])
		 {
		 	low=mid+1;
		 }
		 else if(array[i]<array[mid])
		 {
		 	high=mid-1;
		 }
	}
	if(flag==false)
	{
	cout<<array[i];
	}
	else
	{
		
	}
	
	}
	
	return 0;
	
	
}