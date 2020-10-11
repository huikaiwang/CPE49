#include<iostream>
using namespace std;

int main(){
	int Dooms_day[12]={10,21,0,4,9,6,11,8,5,10,7,12}; // 3/1 is Tuesday
	// 閨年二月只有28天
	string week[7]={"Monday","Tuesday","Wednesday","Thursday"
			,"Friday","Saturday","Sunday"};
	int cases;
	cin >> cases;
	while(cases--){
		int m,d;
		cin >> m >> d;
		m--; // fit index of array
		int weekDay=(d-Dooms_day[m]+35)%7; // +35 is fit to >0
		cout << week[weekDay] << endl;
	}
}
