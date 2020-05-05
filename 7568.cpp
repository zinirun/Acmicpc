#include <iostream>
using namespace std;
main(){
	int n; cin>>n;
	int dungchi[n][2], rank[n];
	for(int i=0; i<n; i++) rank[i] = 1;
	for(int i=0; i<n; i++) for(int j=0; j<2; j++) cin>>dungchi[i][j];
	for(int i=0; i<n; i++) for(int j=0; j<n; j++)
		if(dungchi[i][0] < dungchi[j][0] && dungchi[i][1] < dungchi[j][1]) rank[i]++;
	for(int i=0; i<n; i++) cout<<rank[i]<<' ';
}
