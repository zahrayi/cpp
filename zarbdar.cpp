#include <iostream>
using namespace std;
int main()
{
	int a;
	int j,i;
	cin>>a;
	for (j=1;j<=a;j++)
	{
		for (i=1;i<=a;i++)
		{
			if (j==i || (j==a-i+1))
			{
				cout << "*";
			}
			else{
				cout <<" ";
			}
		}
		cout << "\n";
	}
	return 0;
}