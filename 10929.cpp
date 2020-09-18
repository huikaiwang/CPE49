#include<iostream>
using namespace std;

int main(){
	string str;
	while(cin >> str && str!="0"){
		int sum[2]={0};
		for(int i=0;i<str.size();i++)
			sum[i%2]+=str[i]-'0';
		if(abs(sum[0]-sum[1])%11==0)
			cout << str << " is a multiple of 11." << endl;
		else
			cout << str << " is not a multiple of 11." << endl;
	}
}
