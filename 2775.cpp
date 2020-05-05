#include <iostream>
using namespace std;
main(){
	int t, k, n, people[15][15] = {0};
	for(int i=1; i<15; i++) people[0][i] = i;
	for(int i=1; i<15; i++) for(int j=1; j<15; j++)
		people[i][j] = people[i-1][j] + people[i][j-1];
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> k >> n; cout << people[k][n] << endl;
	}
}
