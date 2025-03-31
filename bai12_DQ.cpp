#include<iostream>
using namespace std;

void decToHex(long long n){
	if(n == 0) return;
	if(n > 1)
		decToHex(n/16);
	if(n % 16 <= 9)
		cout<<n % 16;
	else
	cout<<(char)(n%16 + 'A' - 10); 
}
int main(){
	long long n;
	cin>>n;
	if(n==0)
		cout<<0;
	else
		decToHex(n);
	
	return 0;
}
