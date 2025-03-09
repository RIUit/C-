#include<iostream>
using namespace std;



int main(){
	int n;
	long long du=1e9+7; 
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long tich=1;
	for(int i=0;i<n;i++){
	tich=(tich*a[i])%du; 
	}
	cout<<tich<<endl;
	
	
	return 0;
}
