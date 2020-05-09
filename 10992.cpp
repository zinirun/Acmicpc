#include <iostream>
using namespace std;

int main(){
	int num, i;
	cin >> num;
	
	if(num == 1) cout << "*";
	
	for(i=1; i<num; i++){
		for(int j=1; j<=num - i; j++){
			cout << " ";
		}
		for(int j=1; j<=i*2-1; j++){
			if(j == 1 || j == i*2-1) cout << "*";
			else cout << " ";
		}
		cout << "\n";
		if(i+1 == num){
			for(int j=1; j<= num*2-1; j++) cout << "*";
			cout << "\n";
		}
	}
}
