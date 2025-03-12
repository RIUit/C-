#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
using ll=long long;

int main(){
	int n;
	cin>>n;
	bool ok=false;
	for(int i=0;i<n;i++){
		int so;
	
		cin>>so;
		if(so==2022){
		ok=true;
		}
	}
	if(ok==true)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	

	
	return 0;
}
