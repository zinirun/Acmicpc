#include <cstdio>
#include <algorithm>
using namespace std;
int dp[100001], seq[100001];
long long sum = 0;

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
		scanf("%d", &seq[i]);
	dp[1] = seq[1];
	for (int i = 2; i <= n; i++) {
		dp[i] = max(seq[i], dp[i-1] + seq[i]);
	}
	sum = dp[1];
	for (int i = 1; i <= n; i++) {
		if(dp[i] > sum) sum = dp[i]; 
	}
	printf("%d\n", sum);
}
