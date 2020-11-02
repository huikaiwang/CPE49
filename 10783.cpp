#include<iostream>
using namespace std;

int main(){
	int tests;
	cin >> tests;
	for(int c=1;c<=tests;c++){
		int a,b,tmp,sum=0;
		cin >> a >> b;
		if(a>b){
			tmp=a;
			a=b;
			b=tmp;
		}
		for(int i=a;i<=b;i++){
			if(i%2!=0)
				sum+=i;
		}
		cout << "Case " << c << ": " << sum << endl; 
	}
}
