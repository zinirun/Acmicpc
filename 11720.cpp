#include <iostream>
using namespace std;

int main(){
	int numCnt, sumNum = 0;
	char num;
	cin >> numCnt;
	
	for(int i=0; i<numCnt; i++){
		cin >> num;
		sumNum += num - '0';
	}
	
	cout << sumNum << endl;
}
