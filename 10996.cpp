#include <iostream>
using namespace std;
void st(int n){
	int dBig = n/2;
	int dSmall = n - dBig;
	if(dBig < dSmall){
		int tmp;
		tmp = dBig; dBig = dSmall; dSmall = tmp;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<=dBig; j++) cout << '*' << ' ';
		cout << endl;
		for(int j=0; j<dSmall; j++) cout << ' ' << '*';
		cout << endl;
	}
}
main(){
	int n; cin >> n; st(n);
}
