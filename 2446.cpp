#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	
	for(int i=1; i<=num; i++){
		for(int j=1; j<i; j++) cout << " ";
		for(int j=num*2; j>i*2-1; j--) cout << "*";
		cout << "\n";
	}
	for(int i=2; i<=num; i++){
		for(int j=num; j>i; j--) cout << " ";
		for(int j=1; j<=i*2-1; j++) cout << "*";
		cout << "\n";
	}
}
