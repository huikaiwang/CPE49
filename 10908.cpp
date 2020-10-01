#include<iostream>
using namespace std;

int main(){
	int cases;
	cin >> cases;
	while(cases--){
		int m,n,q;
		cin >> m >> n >> q;
		cout << m << " " << n << " " << q << endl;
		string square[m];
		int i;
		for(i=0;i<m;i++)
			cin >> square[i];
		for(i=0;i<q;i++){
			int r,c;
			cin >> r >> c;
			char center=square[r][c];
			int height_half=(r<(m-r-1))?r:(m-r-1);
			int width_half=(c<(n-c-1))?c:(n-c-1);
			int length_half=height_half<width_half?height_half:width_half;
			int j,k,l,side_half=0;
			bool isSquare=true;
			for(j=1;j<=length_half;j++){
				for(k=r-j;k<=r+j;k++){
					for(l=c-j;l<=c+j;l++){
						if(square[k][l]!=center){
							isSquare=false;
							break;
						}
					}
				}
				if(isSquare)
					side_half++;
			}
			cout << side_half*2+1 << endl;
				
		}
	}
}
