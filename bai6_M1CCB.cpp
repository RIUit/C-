#include<iostream>
using namespace std;


int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k;cin>>k;
	int dem=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==k&&i!=j)
				dem++;
		}
	}
	cout<<dem<<endl;
	
	
	
	
	return 0;
}
