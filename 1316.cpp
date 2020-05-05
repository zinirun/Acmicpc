#include <iostream>
#include <string>
using namespace std;

int main(){
	int wd, cnt=0;
	cin >> wd;
	string str;
	for(int i=0; i<wd; i++){
		str = {};
		cin >> str;
		for(int j=0; j<str.length(); j++){
			for(int k=0; k<str.length() - 2; k++){
				if(str[j] == str[k+2]) break;
				else{
					cnt++; break;
				}
				break;
			}
		}
	}
	cout << cnt;
}
