  #include <iostream>
using namespace std;
int main()
{
	int num[5];
	for(int i=0; i<5; i++)
	{
		cout<<"enter your number:";
		cin>>num[i];
	}
	for(int i=0; i<=3; i++)
	{
		for(int j=i+1; j<5; j++)
		{
			int temp;
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	for(int i=0; i<5;i++)
	{
		cout<<num[i]<<endl;
	}
}