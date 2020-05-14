#include <cstdio>
#include <algorithm>
using namespace std;
int up_dp[1001], down_dp[1001], seq[1001], res=0;

int main(){
	int n, j;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
		scanf("%d", &seq[i]);
	
	for (int i = 1; i <= n; i++) {
		up_dp[i] = 1;
		for(j = 1; j <= i; j++){
			if(seq[j] < seq[i]){
				up_dp[i] = max(up_dp[i], up_dp[j] + 1);
			}
		}
	}
	for (int i = n; i > 0; i--) {
		down_dp[i] = 1;
		for(j = n; j >= i; j--){
			if(seq[j] < seq[i]){
				down_dp[i] = max(down_dp[i], down_dp[j] + 1);
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		res = max(res, up_dp[i] + down_dp[i] - 1);
	}
	printf("%d\n", res);
}
