#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"add a 2 digit number:";
	cin>>x;
	int first_digit, second_digit;
	first_digit= x/10;
	second_digit=x%10;
	
	cout<<"revers number is:"<< second_digit<<first_digit<<endl;
	return 0;  
}
