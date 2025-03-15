#include<iostream>
#include<cmath>
using namespace std;
using ll=long long;


bool isNguyenTo(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	ll tong=0;
	for(int i=0;i<n;i++){
		if(isNguyenTo(a[i])){
			tong+=a[i];
		}
	}
	cout<<tong<<endl;
	
	for(int i=0;i<n;i++){
		if(isNguyenTo(a[i]))
			cout<<a[i]<<" ";
	}
	
	
	return 0;
}
