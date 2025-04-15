#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int isNguyenTo(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int n;
	int cnt=0;
	double tb=0;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(isNguyenTo(a[i])){
			tb+=a[i];
			cnt++;
		}
	}
	tb = 1.0 * tb / (cnt);
	cout<<fixed<<setprecision(3)<<tb<<endl;
	return 0;
}
