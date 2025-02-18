#include <iostream>



using namespace std;



long long s(long long i){
	
	if (i == 0)
		return 0;
	
	return (i % 9 == 0) ? 9 : (i % 9);
}



int main (){
	long long a;
	cin >> a;
	cout << s(a) << endl;
	return 0;
}