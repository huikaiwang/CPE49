#include<iostream>
using namespace std;

int main(){
	int a,b;
	while(cin >> a >> b){
		if(a==0&&b==0) break;
		int count=0,sum;
		bool carry=false;
		while(a!=0||b!=0){
			carry==true?sum=a%10+b%10+1:sum=a%10+b%10;
			if(sum>9){
				count++;
				carry=true;
			}
			else carry=false;
			a/=10;b/=10;
		}
		if(count>1) cout << count << " carry operations.\n" ;
		else if(count==1) cout << count << " carry operation.\n";
		else cout << "No carry operation.\n";
	}
}
