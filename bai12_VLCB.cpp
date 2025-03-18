#include<iostream>
using namespace std;

int main(){
	long long n;
	cin>>n;
	
	int dem2 = 0,dem3 = 0,dem5 = 0,dem7 = 0;
	while(n!=0){
		int chuso = n % 10;
		if(chuso == 2) dem2++;
		if(chuso == 3) dem3++;
		if(chuso == 5) dem5++;
		if(chuso == 7) dem7++;
		n /= 10;
	}
	if(dem2>0)
		cout<<2<<" "<<dem2<<endl;
	if(dem3>0)
		cout<<3<<" "<<dem3<<endl;
	if(dem5>0)
		cout<<5<<" "<<dem5<<endl;
	if(dem7>0)
		cout<<7<<" "<<dem7<<endl;
	
	
	
	return 0;
}
