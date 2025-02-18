#include <iostream>
using namespace std;
struct time
{
	int day;
	int month;
	int year;
};
struct course
{
	int user_counter;
	int video_counter;
	int time_length;
	string level;
	bool isfinished;
	time last_update;
	void showinfo()
	{
		cout<<"number of users:"<<user_counter<<endl;
		cout<<"number of videos:"<< video_counter<<endl;
		cout<<"length of course:"<<(time_length/60)<<":"<<(time_length%60)<<endl;
		cout<<"level of course:"<<level<<endl;
		cout<<"status of course:";
		if(isfinished == true)
		{
			cout<<"be payan reside"<<endl;
		}
		else{
			cout<<"dar hale bargozari"<<endl;
		}
		cout<<"last_update:"<< last_update.year<<"/"<< last_update.month<<"/"<<last_update.day<<endl;
		
	}
};
int main()
{
	course cpp;
	cpp.user_counter = 3192;
	cpp.video_counter = 14;
	cpp.level = "mid";
	cpp.isfinished = false;
	cpp.last_update.year= 1399;
	cpp.last_update.month=2;
	cpp.last_update.day=3;
	cpp.time_length = 459;
	cpp.showinfo();
	
	return 0;
	
}