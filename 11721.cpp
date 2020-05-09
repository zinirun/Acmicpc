#include <iostream>
#include <string>
using namespace std;

int main(){
	string strInput;
	cin >> strInput;
	for(int i=0; i<strInput.length(); i++){
		cout << strInput[i];
		if((i+1)%10 == 0) cout << endl;
	}
}
