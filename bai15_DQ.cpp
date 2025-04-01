#include<iostream>
using namespace std;


long long first_digit(long long n){
	if(n<10) return n;
	return first_digit(n/10);
}
int main(){
	long long n;
	cin>>n;

	cout<<first_digit(n)<<endl;
	

	
	return 0;
}
