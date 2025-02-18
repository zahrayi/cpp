



#include <iostream>
using namespace std;


int main()
{
	int r;
	cout<<"enter r: "<<endl;
	cin>>r;
	float p=3.14;
	int m;
	int n;
	int b;
	cout<<"if you want masahat enter m and if you want mohit enter n if you want both enter b :"<<endl;
	int d;
	cin>>d;
	
	if(d==m)
	{
		float masahat;
		int R;
		R=r*r;
		masahat=p*R;
		cout<<"masahat is: "<<masahat<<endl;
		
	}
	else if(d==n)
	{
		float mohit;
		mohit=p*(r+r);
		cout<<"mohit is: "<<mohit<<endl;
		
	}
	else if(d==b)
	{
		float masahat;
		float mohit;
		masahat=p*r*r;
		mohit=p*(r+r);
		
		cout<<"masahat is: "<<masahat<<endl;
		
		cout<<"mohit is: "<<mohit<<endl;	
	}
}