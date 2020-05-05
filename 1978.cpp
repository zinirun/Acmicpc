#include <iostream>
using namespace std;
int main(){
	int n; cin>>n;
	int s[n], cnt=0, tmp;
	for(int i=0; i<n; i++) cin>>s[i];
	for(int i=0; i<n; i++){
		tmp = 0;
		if(s[i] > 0){
			for(int j=1; j<=s[i]; j++) if(s[i] % j == 0) tmp++;
			if(tmp == 2) cnt++;
		}
	}
	cout<<cnt;
}
