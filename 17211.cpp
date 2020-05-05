#include <iostream>
#include <math.h>
using namespace std;
main(){
	int n, feel; cin>>n>>feel;
	double g_g, g_b, b_g, b_b; cin>>g_g>>g_b>>b_g>>b_b;
	double preG[n], preB[n];
	
	if(feel == 0){
		preG[0] = g_g; preB[0] = g_b;
	}
	else{
		preG[0] = b_g; preB[0] = b_b;
	}
	
	for(int i=1; i<n; i++){
		preG[i] = preG[i-1] * g_g + preB[i-1] * b_g;
		preB[i] = preG[i-1] * g_b + preB[i-1] * b_b;
	}
	
	cout << round(preG[n-1]*1000) << '\n'
	<< round(preB[n-1]*1000);
}
