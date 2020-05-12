#include <cstdio>
#include <algorithm>
using namespace std;

int dp[10001], grape[10001];

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
		scanf("%d", &grape[i]);
			
	dp[1] = grape[1];
	dp[2] = grape[1] + grape[2];
	
	for (int i = 3; i <= n; i++) {
		dp[i] = dp[i-2] + grape[i]; //���� ���� ù��° ��
		dp[i] = max(dp[i], dp[i-3] + grape[i-1] + grape[i]); //���� ���� �ι�° �� 
		dp[i] = max(dp[i], dp[i-1]); //���� ���� ������ ���� �� 
	}
	
	printf("%d\n", dp[n]);
}
