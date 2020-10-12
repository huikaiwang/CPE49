#include<iostream>
using namespace std;

int main(){
	int cases;
	cin >> cases;
	while(cases--){
		int sum,diff,sc1,sc2;
		cin >> sum >> diff;
		sc1=(sum+diff)/2; //(a+b)+(a-b)=2a
		sc2=(sum-diff)/2; //(a+b)-(a-b)=2b
		if(sc1<sc2){
			int tmp=sc1;
			sc1=sc2;
			sc2=tmp;
		}
		if(((sc1+sc2)==sum)&&((sc1-sc2)==diff)&&(sum>=diff)) 
			cout << sc1 << " " << sc2 << endl;
		else
			cout << "impossible" << endl;
	}
}





