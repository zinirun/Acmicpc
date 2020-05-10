#include <iostream>
using namespace std;

int tileArray[1001];

int makeTile(int width){
	tileArray[1] = 1;
	tileArray[2] = 2;
	
	for(int i=3; i<=width; i++){
		tileArray[i] = tileArray[i - 1]%10007 + tileArray[i - 2]%10007;
	}
	
	return tileArray[width];
}

int main(){
	int n; cin >> n;
	cout << makeTile(n)%10007;
}
