#include <cstdio>
#include <algorithm>
using namespace std;
int dp[1001], seq[1001];
long long sum = 0;

int main(){
	int n, tmp;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
		scanf("%d", &seq[i]);
	 
	for (int i = 1; i <= n; i++) {
		dp[i] = seq[i];
		for(int j = 1; j <= i; j++){
			if(seq[j] < seq[i] && dp[i]  < dp[j] + seq[i]){
				dp[i] = dp[j] + seq[i];
			}
			if(dp[i] > sum) sum = dp[i];
		}
	}
	printf("%d\n", sum);
}
