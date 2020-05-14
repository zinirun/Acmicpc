#include <cstdio>
#include <algorithm>
using namespace std;
int dp[1001], seq[1001], res=0;

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
		scanf("%d", &seq[i]);
	
	for (int i = 1; i <= n; i++) {
		dp[i] = 1;
		for(int j = 0; j <= i; j++){
			if(seq[j] < seq[i]){
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		res = max(res, dp[i]);
	}
	
	printf("%d\n", res);
}
