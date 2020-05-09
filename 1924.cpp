#include <iostream>
#include <string>
using namespace std;

int main(){
	int month, day, int_day;
	string str_day;
	cin >> month >> day;
	int sum_day = 0;
	
	for(int i=1; i<=month-1; i++){
		if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10)
			sum_day+=31;
		else if(i == 4 || i == 6 || i == 9 || i == 11)
			sum_day+=30;
		else if(i == 2)
			sum_day+=28;
	}
	
	sum_day += day;
	int_day = sum_day%7;
	
	switch(int_day){
		case 0: str_day = "SUN"; break;
		case 1: str_day = "MON"; break;
		case 2: str_day = "TUE"; break;
		case 3: str_day = "WED"; break;
		case 4: str_day = "THU"; break;
		case 5: str_day = "FRI"; break;
		case 6: str_day = "SAT"; break;
		default: break;
	}
	
	cout << str_day;
}
