#include <iostream>
using namespace std;

#define MOD 1000000000

long long dp[101][10] = { 0 }; // i, j

void initFloor(){
	for(int i=0; i<9; i++){
		dp[0][i] = 1;
	}
}

long long calcFloor(int n){
	long long sum = 0;
	for(int i=1; i<=n; i++){
		dp[i][0] = dp[i-1][1] % MOD;
		for(int j=1; j<=8; j++){
			dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % MOD;
		}
		dp[i][9] = dp[i-1][8] % MOD;
	}
	
	for(int i=0; i<=9; i++){
		sum += dp[n-1][i];
	}
	
	return sum % MOD;
}

int main(){
	initFloor();
	
	int N;
	cin >> N;
	
	cout << calcFloor(N);
}
