#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	string a,b;
	while(getline(cin,a) && getline(cin,b)){
		int CountA=0,CountB=0;
		int letter[26]={0};
		char tmp;
		for(int i=0;i<26;i++){
			CountA=count(a.begin(),a.end(),97+i);
			CountB=count(b.begin(),b.end(),97+i);
			letter[i] = min(CountA,CountB);
			if(letter[i]!=0){
				for(int j=0;j<letter[i];j++){
					tmp=97+i;
					cout << tmp;
				}
			}
		}
		cout << endl;
	}
}
