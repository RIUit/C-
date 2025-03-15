#include<iostream>
#include<cmath>
using namespace std;
using ll=long long;


int main(){
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<0<<" ";
	for(int i=0;i<n;i++){
		if(i%2==0){
			if(a[i]<a[i+1])
				cout<<a[i+1]<<" ";
		}else{
			if(a[i]<a[i+1])
				cout<<a[i+1];
		}
	
	}
	
	
	return 0;
}
