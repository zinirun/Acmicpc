#include <iostream>
using namespace std;
void st(int x, int y, int l){
	if(x/l%3==1 && y/l%3==1) cout << ' ';
	else{
		if(l/3 == 0) cout << '*';
		else st(x,y,l/3);
	}
}
main(){
	int n; cin >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++) st(i,j,n);
		cout << endl;
	}
}
