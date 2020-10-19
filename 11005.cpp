#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long int cal_cost_of_base(int *cost,long long int num,int base);

int main(){
	int cases;
	cin >> cases;
	for(int i=0;i<cases;i++){
		if(i!=0) cout << endl;
		int costs[36];
		for(int j=0;j<36;j++)
			cin >> costs[j];
		int n;
		cin >> n;
		long long int queries[n];
		cout << "Case " << i+1 << ":" << endl;
		for(int j=0;j<n;j++){
			cin >> queries[j];
			long long int base_cost[35]; // 35 from 36-2+1;
			long long int min_cost=0;
			for(int k=2;k<=36;k++){
				base_cost[k-2]=cal_cost_of_base(costs,queries[j],k);
				if(min_cost>=base_cost[k-2] || min_cost==0)
					min_cost=base_cost[k-2];
			}
			cout << "Cheapest base(s) for number " << queries[j] << ":";
			for(int j=0;j<35;j++){
				if(base_cost[j]==min_cost)
					cout << " " << (j+2); 
			}
			cout << endl;
		}
	}
}

long long int cal_cost_of_base(int *cost,long long int num,int base){
	vector<int> convert_base;
	while(num!=0){
		convert_base.push_back(num%base);
		num/=base;
	}
	reverse(convert_base.begin(),convert_base.end());
	long long int total_cost=0;
	for(int i=0;i<convert_base.size();i++){
		total_cost+=cost[convert_base[i]];
	}
	return total_cost;
}
