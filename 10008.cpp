#include<iostream>
#include<string>
using namespace std;

void swap(int *i,int *j,char *k,char *m){
	int tmp1=*i;
	*i=*j;
	*j=tmp1;
	char tmp2=*k;
	*k=*m;
	*m=tmp2;
}

int main(){
	int n;
	cin >> n;
	cin.ignore();
	int i,j,count[26]={0};
	string str;
	char letter[26]={0};
	for(i=0;i<26;i++)
		letter[i]='A'+i;
	for(i=0;i<n;i++){
		getline(cin,str);
		for(j=0;j<str.size();j++){
			if(str[j]>='a'&&str[j]<='z') str[j]-=32;
			if(str[j]>='A'&&str[j]<='Z') count[str[j]-65]+=1;	
		}
	}
	for(i=0;i<26;i++)
		for(j=0;j<26-i-1;j++)
			if(count[j]<count[j+1])
				swap(&count[j],&count[j+1],&letter[j],&letter[j+1]);
	for(i=0;i<26;i++){
		if(count[i]==0) break;
		cout << letter[i] << " " << count[i] << endl;
	}
}
