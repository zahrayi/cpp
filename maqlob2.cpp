#include <iostream>
using namespace std;
int main()
{
	int x, a,p;
	cin>>x;
	a=0;
	p=x;
	while(x>0)




	{
	a=(a*10)+(x%10);
	x=x/10;
	}


	if(p==a)
	{
		cout<<"YES";
	}

	else
	{
		cout<<"NO";
	
	
	}
	
	return 0;
}