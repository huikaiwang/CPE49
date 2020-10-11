#include<iostream>
using namespace std;

int algo(int n){
	int c=1;
	while(n!=1){
		if(n%2!=0) n=3*n+1;
		else n=n/2;
		c++;
	}
	return c;
}

int main(){
	int i,j;
	while(cin >> i >> j){
		int max=0;
		int t1=i;
		int t2=j;
		if(i>j){
			t1=j;
			t2=i;
		}
		for(int n=t1;n<=t2;n++){
			if(max<algo(n)) max=algo(n);
		}
		cout << i << " " << j << " " << max << endl;
	}
}
