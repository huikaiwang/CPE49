#include<iostream>
#include<iomanip>
using namespace std;

void convert(long long int num){
	if(num>=10000000){
		convert(num/10000000);
		cout << " kuti";
		num%=10000000;
	}
	if(num>=100000){
		convert(num/100000);
		cout << " lakh";
		num%=100000;
	}
	if(num>=1000){
		convert(num/1000);
		cout << " hajar";
		num%=1000;
	}
	if(num>=100){
		convert(num/100);
		cout << " shata";
		num%=100;
	}
	if(num)
		cout << " " << num;
}

int main(){
	int time=1;
	long long int num;
	while(cin >> num){
		cout << setw(4) << time <<".";
		if(num==0){
			cout << " 0" << endl;
			time++;
		}
		else{
			convert(num);
			cout << endl;
			time++;
		}
	}
}
