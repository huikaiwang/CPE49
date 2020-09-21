#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int i,n;
	cin >> n;
	cin.ignore();
	string str[n];
	for(i=0;i<n;i++){
		cin >> str[i];
		cin.ignore(75,'\n');
	}
	sort(str,str+n);
	int count,j;
	for(i=0;i<n;){
		cout << str[i] << " ";
		count=1;
		for(j=i+1;j<n;j++){
			if(str[i]!=str[j]) break;
			else count++;
		}
		i=j;
		cout << count << endl;
	}
}
