#include <iostream>
using namespace std;

#define MOD 1000000000
long long dp[201][201] = {0, };
int main(){
	int n, K, tmp;
	
	cin >> n >> K;
	
	for(int i=0; i<=n; i++){
		dp[i][1] = 1;
		for(int j=2; j<=K; j++){
			for(int k=0; k<=i; k++){
				dp[i][j] += dp[k][j-1];
				dp[i][j] %= MOD;
			}
		}
	}
	
	cout << dp[n][K] % MOD << '\n';
}
