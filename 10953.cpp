#include <iostream>
#include <string>
using namespace std;
int main(){
	string ln;
	int t, a, b;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> ln;
		a = ln[0] - '0'; b = ln[2] - '0';
		cout << a + b << endl;
	}
}
