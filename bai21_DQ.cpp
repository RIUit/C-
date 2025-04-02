#include<iostream>
using namespace std;


bool dx(int p[],int l,int r){
	if(l>r) return true;
	if(p[l]!=p[r]) return false;
	return dx(p,l+1,r-1);
}
int main(){
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	} 
	if(dx(a,0,n-1))
		cout<<"YES\n";
	else
		cout<<"NO\n";
		

	return 0;
}
