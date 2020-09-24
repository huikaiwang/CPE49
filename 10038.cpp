#include<iostream>
using namespace std;

int main(){
	int i,n;
	while(cin >> n){
		int num[n],count[n],d=0;
		for(i=0;i<n;i++){
			num[i]=0;
			count[i]=0;
		}
		bool jolly=true;
		for(i=0;i<n;i++){
			cin >> num[i];
			if(i>0){
				d=abs(num[i]-num[i-1]);		
				if(!(d>=1&&d<n))
					jolly=false;
				else{
					count[d]+=1;
					if(count[d]>1) 
						jolly=false;
				}
			}
		}
		if(jolly)
			cout << "Jolly" << endl;
		else
			cout << "Not jolly" << endl;
	}
}
