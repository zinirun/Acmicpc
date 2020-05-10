#include <cstdio>
#include <algorithm>
using namespace std;

int dp[2][100001], sticker[2][100001];

int main(){
	int T, n;
	scanf("%d", &T);
	
	while(T--){
		scanf("%d", &n);
		for(int i=0; i<2; ++i)
			for(int j=1; j<=n; ++j)
				scanf("%d", &sticker[i][j]);
				
		dp[0][1] = sticker[0][1];
		dp[1][1] = sticker[1][1];
		
		for (int i = 2; i <= n; ++i) {
			dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + sticker[0][i];
			dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + sticker[1][i];
		}
		printf("%d\n", max(dp[0][n], dp[1][n]));
	}
}
