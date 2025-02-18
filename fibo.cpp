#include <iostream>
using namespace std;
int main()
{
int a,b,c,i,n;
cin>>n;
a=1;
b=0;
c=1;
for(i=1;i<=n;i++)
{cout<<a;
b=a;
a=c;
c=a+b;}
}