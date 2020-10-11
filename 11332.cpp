#include<iostream>
using namespace std;

int Summing_Digits(long long int n){
	int num=n,sum=0;
	while(num!=0){
		sum+=num%10;
		num/=10;
	}
	if(sum>9)
		sum=Summing_Digits(sum);
	return sum;
}

int main(){
	long long int n;
	while(cin >> n){
		if(n==0) break;
		int sum=Summing_Digits(n);
		cout << sum << endl;
	}
}
