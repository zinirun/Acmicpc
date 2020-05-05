#include <iostream>
using namespace std;
int main(){
	int a,b;
	while(cin >> a >> b){ //EOF(End Of File)
		if(a == 0 && b == 0) break;
		cout << a+b << endl;
	}
}
