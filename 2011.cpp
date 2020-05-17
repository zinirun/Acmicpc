#include <iostream>
#include <string>
using namespace std;
#define MOD 1000000
int dp[5002];
int main(){
	int tmp;
	string s;
	cin >> s;
	
	dp[0] = 1;
	s = ' ' + s;
	
	for(int i=0; i<s.size(); i++){
		if(s[i] - '0' >= 1){
			dp[i] = (dp[i] + dp[i-1]) % MOD;
		}
		
		tmp = (s[i-1] - '0')*10 + (s[i] - '0');
		
		if(tmp >= 10 && tmp <= 26){
			dp[i] = (dp[i] + dp[i-2]) % MOD;
		}
	}
	
	cout << dp[s.size() - 1];
}
