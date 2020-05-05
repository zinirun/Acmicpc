#include <iostream>
using namespace std;

int main(){
	int n, tmp, cnt=0;
	cin >> n;
	int sep[3];
	for(int i = 1; i <= n; i++){
		tmp = i;
		if(tmp < 100) cnt++;
		else{
			for(int j = 2; j >= 0; j--){
				sep[j] = tmp % 10;
				tmp /= 10;
			}
			if(sep[2] - sep[1] == sep[1] - sep[0]) cnt++;
		}
		if(i == 1000) cnt--;
	}	
	cout << cnt;
}
