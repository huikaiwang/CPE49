#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int i,int j){
	return i<j;
}

int main(){
	int n;
	cin >> n;
	while(n!=0){
		int i,r,arr[30000]={0};
		cin >> r;
		for(i=0;i<r;i++)
			cin >> arr[i];
		sort(arr,arr+r,cmp);
		int sum=0,m=r/2;
		for(i=0;i<r;i++){
			if(i==m) continue;
			else{
				sum+=abs(arr[m]-arr[i]);	
			}
		}
		cout << sum << endl;
		n--;
	}
}
