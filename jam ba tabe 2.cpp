#include <iostream>
#include <math.h>
using namespace std;
int calculate_sum()
{
	int first=10 ;
	int sec=14 ;
	int sum=first+sec;
	return sum;
}
int calculate_sum_2(int first, int sec)
{
	int sum=first+sec;
	return sum;
}
int main()
{
	cout<<"sum(2,10) ="<<calculate_sum_2(2,10)<<endl;  
}