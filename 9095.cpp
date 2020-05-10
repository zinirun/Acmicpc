#include <iostream>
using namespace std;

int arr[12] = {0, 1, 2, 4, };

int main(){
	int t, n;
	cin >> t;
	
	for(int k=0; k<t; k++){
		cin >> n;
		
		for(int i=4; i<=n; i++){
		arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
		}
		
		cout << arr[n] << "\n";
	}
}
