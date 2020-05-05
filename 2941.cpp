#include <iostream>
#include <string>
using namespace std;

int main(){
	string str; cin >> str;
	char check[8][4] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	int cnt = 0, i = 0, n = str.length();
	for(int i=0; i<=n; i++){
		for(int j=0; j<8; j++){
			if(str[i] == check[j][0] && str[i+1] == check[j][1]){
				cout << "일치 1: " << i << endl;
				cnt++; i+=1;
			}
			else if(str[i] == check[j][0] && str[i+1] == check[j][1] && str[i+2] == check[j][2]){
				cout << "일치 2: " << i << endl;
				cnt++; i+=2;
			} else{
				cout << "아님 3: " << i << endl;
				cnt++;
			}
		} cout << cnt;
	}
}
