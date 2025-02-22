#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

float rsum(float list[ ], int n)
{
	int count;
count++; /*for if conditional */
if (n > 0) {
count++; /* for return and rsum invocation */
return rsum(list, n-1) + list[n-1];
}
count++;
return 0;
}
int main()
{
   float myList[] = {1.0, 2.5, 3.7, 4.2};
  int n = sizeof(myList)/sizeof(myList[0]);
  float y = rsum(myList, n);
  cout << y;
	
}