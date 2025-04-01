#include<iostream>
using namespace std;

long long demChuSo(long long n){
	if(n<10) return n;
	return n%10	+demChuSo(n/10);
}
int main(){
	long long n;
	cin>>n;
	cout<<demChuSo(n);
	
	return 0;
}
