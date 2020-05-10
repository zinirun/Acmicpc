#include <iostream>
using namespace std;

#define MOD 10007

long long dp[1001][10] = { 0 }; // i, j

void initNum(){
	for(int i=0; i<=9; i++){
		dp[1][i] = 1;
	}
}

long long calcNum(int n){
	long long sum = 0;

	for(int i=2; i<=n; i++){
		for(int j=0; j<=9; j++){
			for(int k=0; k<=j; k++)
				dp[i][j] += dp[i-1][k];
				dp[i][j] %= MOD;
		}
	}
	
	for(int i=0; i<=9; i++){
		sum += dp[n][i];
		sum %= MOD;
	}
	
	return sum % MOD;
}

int main(){
	initNum();
	
	int N;
	cin >> N;
	
	cout << calcNum(N);
}
