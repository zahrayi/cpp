#include <iostream>
using namespace std;
int main()
{
	int r=0, y=0, g=0;
	char z[6];
	cin>>z;
	for(int j=0; j<=4; j++)
	{
		if( (int) z[j] == (int) 'r'|| (int) z[j] == (int) 'R')
		r++;
		else if( (int) z[j]== (int) 'g' || (int) z[j]== (int)'G' )
		g++;
		
		else if ( (int ) z[j]== (int)'y' || (int) z[j] == (int) 'Y' )
		y++;
	}
	if ( (r==5 || y==5) || (r>=3) || ( r>=2 && y>=2) || (r==1 && y==4))
	cout<<"nakhor lite "<<endl;
	else
	{
		cout<<"rahat baash"<<endl;
	}
	return 0;
}