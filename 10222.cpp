#include<iostream>
#include<string>
using namespace std;

int main(){
	string kb="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	string str;
	getline(cin,str);
	int i,j;
	for(i=0;i<str.size();i++){
		if(str[i]==' ') cout << " ";
		else{
			for(j=0;j<kb.size();j++){
				if(tolower(str[i])==kb[j]){
					cout << kb[j-2];
					break;
				}
			}
		}
	}
	cout << endl;
	
}
