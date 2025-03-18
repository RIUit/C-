#include<iostream>
using namespace std;


int main(){
	long long n;
	cin>>n;
	
	int soCuoi=n%10;
	
	while(n>=10){
		n/=10;
	}
	int soDau=n;
	cout<<soDau<<" "<<soCuoi<<endl;


	return 0;
}
