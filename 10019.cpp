#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int num,tmp,k=0,b1=0,b2=0;
		cin >> num;
		tmp=num;
		while(tmp>0){
			if(tmp%2==1) b1+=1;
			tmp/=2;
		}
		tmp=0;
		while(num>0){
			tmp+=num%10*pow(16,k++);
			num/=10;
		}
		while(tmp>0){
			if(tmp%2==1) b2+=1;
			tmp/=2;
		}
		cout << b1 << " " << b2 << endl;
	}
}
