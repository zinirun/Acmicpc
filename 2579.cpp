#include <cstdio>
#include <algorithm>
using namespace std;

int dp[10001], arr[10001];

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
		scanf("%d", &arr[i]);
			
	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	
	for (int i = 3; i <= n; i++) {
		dp[i] = max(dp[i-2] + arr[i], dp[i-3] + arr[i-1] + arr[i]);
	}
	printf("%d\n", dp[n]);
}
