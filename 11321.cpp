#include<iostream>
#include<algorithm>
using namespace std;

int m;

bool isOdd(int n){
	return abs(n)%2;
}

bool cmp(int i,int j){
	//這裡的i,j位置與原本的i,j位置不一樣(對調)
	int k,l;
	k=i%m;
	l=j%m;
	if(k==l){
		if(!(isOdd(i))&&isOdd(j)) return 0;
		if(isOdd(i)&&!(isOdd(j))) return 1;
		if(isOdd(i)&&isOdd(j)) return i>j;
		if(!(isOdd(i))&&!(isOdd(j))) return i<j;
	}
	return k<l;
}

int main(){
	int n;
	while(cin >> n >> m){
		if(n==0&&m==0){
			cout << n << " " << m << endl;
			break;
		}
		int i;
		long long int arr[10000]={0};
		for(i=0;i<n;i++)
			cin >> arr[i];
		sort(arr,arr+n,cmp);
		cout << n << " " << m << endl;
                for(i=0;i<n;i++)
                	cout << arr[i] << endl;
	}
}
