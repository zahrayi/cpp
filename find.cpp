#include <iostream>
using namespace std;
int main()
{
	int n;
	int c=0;
	cin>>n;
	int a[n][n];
	for(int i=0; i<n; i++)
		for(int j=0;j<n;j++)
		    cin>>a[i][j];
		    
	int x;
	cout<<"enter your num: ";	
	cin>>x;
	 for( int i=0;i<n;i++)
	     for(int j=0;j<n;j++)
	     {
	     	if(a[i][j]==x)
	     	{
	     		
	     		c++;
			 }
			
		 }
		 
	if(c>0)
	{
		cout<<"vojood darad"<<endl;
		 }
		 else
		 {
		 	cout<<"vojood nadarad"<<endl;
		 }
		 	 
	cout<<c;
}