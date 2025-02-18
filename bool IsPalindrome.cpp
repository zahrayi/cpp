#include<iostream>
#include<string>
using namespace std;
bool IsPalindrome(string str)
{
	for(int i=0; i<= str.length()-1;i++)
	{
		if(str[i]!= str[str.length()-1-i])
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}
int main()
{
	string t;
	int x = 0;
	do
	{
		cin>>t;
		if(IsPalindrome(t))
		{
			cout<<"true"<<endl;
		}
		else
		{
			cout<<"false"<<endl;
		}
		x++;
	}
	while(x==0);
	return 0;
}