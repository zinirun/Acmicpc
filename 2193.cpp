#include <iostream>
using namespace std;

long long dp[91] = {0, 1, 1, };

long long pinaryNum(int n){
	for(int i=3; i<=n; i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	
	return dp[n];
}

int main(){
	int N;
	cin >> N;
	
	cout << pinaryNum(N);
}
