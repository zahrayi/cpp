#include <iostream>
using namespace std;
int main()
{
	int m,n,k,d;
	cin>>m>>n>>k>>d;
	int a[10][10],b[10][10],c[10][10];
	int i,j;
	
	for(i=0;i<m;i++)
	    for(j=0;j<n;j++)
	        cin>>a[i][j];
	        
	for(i=0;i<k;i++)
	    for(j=0;j<d;j++)
	        cin>>b[i][j];
			
	for(i=0;i<m;i++)
	    for(j=0;j<d;j++)
	    {
	    	c[i][j]=0;
	    }
	for(i=0;i<m;i++)
	    for(j=0;j<d;j++) 
		
			for(int z=0;z<n;z++){
			
	    	    c[i][j]=c[i][j]+a[i][z]*b[z][j];
			   }   	
    for(i=0;i<m;i++){
    	for(j=0;j<d;j++)
    	    cout<<c[i][j]<<" ";
    	    cout<<endl;
    	    if(j==d-1)
    	      cout<<endl;
    	}
	}