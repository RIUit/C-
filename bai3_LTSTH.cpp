#include<iostream>
#include<cmath>
using namespace std;

int isNguyenTo(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) 
			return 0;
	}
	return 1;
}
int main(){
	int n;
	cin>>n;
	
	while(n--){
		int x; cin>>x;
		if(isNguyenTo(x))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	
	
	
	return 0;
}
