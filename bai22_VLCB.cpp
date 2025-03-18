#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		if(n%i==0)
			if(i%2==0)
				cout<<i<<" ";
	}
	cout<<endl;
	for(int i=n;i>=1;i--){
		if(n%i==0)
			if(i%2!=0)
				cout<<i<<" ";
	}
	
	return 0;

}
