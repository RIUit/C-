#include<iostream>
using namespace std;


void daoMang(int*p,int l,int r){
	if(l>r) return;
	swap(p[l],p[r]);
	daoMang(p,l+1,r-1);
}
int main(){
	int n;
	cin>>n;
	
	int*a= new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	} 
	for(int i=0;i<n;i++){
		cout<<a[i]<<" "; 
	}
	daoMang(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" "; 
	}
	delete[]a;
	return 0;
}
