#include <iostream>
using namespace std;
int main(){
	int n, m, k;
	cin >> n >> m >> k;
	int *arr = new int[n];
	int chg[3];
	int pr[2];
	int sum[k];
	int t, cnt=0;
	for(int i=0; i<k; i++) sum[i] = 0;
	for(int i=0; i<n; i++) cin >> arr[i];
	for(int i=0; i<m+k; i++){
		cin >> t;
		if(t == 1){
			for(int j=0; j<3; j++) cin >> chg[j];
			for(int l=chg[0] - 1; l<chg[1]; l++) arr[l] += chg[2];
		}
		else if(t == 2){
			for(int j=0; j<2; j++) cin >> pr[j];
			for(int l=pr[0] - 1; l<pr[1]; l++) sum[cnt] += arr[l];
			cnt++;
		}
	}
	for(int i=0; i<k; i++) cout << sum[i] << endl;
}
