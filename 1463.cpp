#include <iostream>
using namespace std;

int dp[1000001], n, i;

int main() {
    cin >> n;
    for(i = 2; i<=n; i++) {
        dp[i] = dp[i-1] + 1;
        if(i%2 == 0){
        	if(dp[i] > dp[i/2]) dp[i] = dp[i/2] + 1;
        	else dp[i] = dp[i];
		}
		if(i%3 == 0){
        	if(dp[i] > dp[i/3]) dp[i] = dp[i/3] + 1;
        	else dp[i] = dp[i];
		}
    }
    cout << dp[n];
	return 0;
}
