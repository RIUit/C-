#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	long long n;
	cin>>n;
	
	int soMax=-1;
	while(n>=10){
		int so=n%10;
		soMax=max(so,soMax);
		n/=10;
	}
	int d=n;
	if(d>=soMax){
		cout<<"YES\n";
	}else
		cout<<"NO\n";
	
	return 0;
}
