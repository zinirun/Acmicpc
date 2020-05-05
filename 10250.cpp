#include <iostream>
using namespace std;
main(){
	int k; cin>>k;
	while(k){
	int n,h,w; cin>>h>>w>>n;
	int ho=0, cnt = 1;
	for(int i=1; i<=w; i++){ //È£ 
		for(int j=1; j<=h; j++){ //Ãþ 
			if(cnt == n){
				ho = j*100 + i;
				break;
			}
			cnt++;
		}
		if(ho != 0) break;
	}
	cout<<ho<<endl; k--;}
}
