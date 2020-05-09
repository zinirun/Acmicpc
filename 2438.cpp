#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	
	for(int i=num; i>0; i--){
		for(int j=i; j<=num; j++){
			cout << "*";
		}
		cout << "\n";
	}
}
