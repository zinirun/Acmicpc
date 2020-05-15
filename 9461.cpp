#include <cstdio>
#include <iostream>
long long dp[101] = {1, 1, 1, 1};
int main() {
    int N, T;
    scanf("%d",&T);
    while(T--){
    	scanf("%d", &N);
    	for(int i = 4; i<=N; i++) {
    		dp[i] = dp[i - 2] + dp[i - 3];
		}
		std::cout << dp[N] << '\n';
	}
    return 0;
}
