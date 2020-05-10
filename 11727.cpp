#include <iostream>
using namespace std;

int tileArray[1001] = {1, 1,};

int main(){
	int n; cin >> n;
	
	for(int i=2; i<=n; i++){
		tileArray[i] = (tileArray[i-1]+tileArray[i-2]*2) % 10007;
	}
	
	cout << tileArray[n];
	return 0;
}
