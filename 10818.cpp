#include <iostream>
using namespace std;

int main(){
	int numCnt;
	cin >> numCnt;
	int num[numCnt];
	
	for(int i=0; i<numCnt; i++) cin >> num[i];
	
	int min = num[0];
	int max = num[0];
	
	for(int i=1; i<numCnt; i++){
		if(num[i] < min) min = num[i];
		else if(num[i] > max) max = num[i];

	}
	
	cout << min << " " << max;
}
