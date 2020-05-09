#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	if(num >= 1){
		for(int i=1; i<=9; i++){
			cout << num << " * " << i << " = " << num*i << "\n";
		}
	}
}
