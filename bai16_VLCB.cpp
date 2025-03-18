#include<iostream>
using namespace std;


int main(){
	long long n;
	cin>>n;
	
	if(n==0){
		cout<<"29tech\n";
		return 0;
	}
	bool ok = false;
	while(n!=0){
		int chuso = n % 10;
		if(chuso % 2 == 0)
			ok = true;
		n/=10;
	}
	if(ok)
		cout<<"29tech\n";
	else
		cout<<"28tech\n";
	
	
	return 0;
}
