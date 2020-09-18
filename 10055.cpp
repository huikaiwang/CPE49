#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	long long int a,b;
	while(scanf("%lld %lld",&a,&b)!=EOF){
		cout << abs(a-b) << endl;
	}
}
