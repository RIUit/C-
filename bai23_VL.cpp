#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	
	int dem=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<dem<<" ";
			dem++;
		}
		cout<<endl;
	}
	cout<<endl;
	

	for(int i=1;i<=n;i++){
		int x=i;
		for(int j=1;j<=n;j++){
			cout<<x<<" ";
			x++;
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<=n-i) cout<<"~";
			else cout<<i;
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(int i=1;i<=n;i++){
		int dem1=i,kc=n-1;
		for(int j=1;j<=i;j++){
			cout<<dem1<<" ";
			dem1=dem1+kc;
			kc--;
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
