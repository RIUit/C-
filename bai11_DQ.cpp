#include<iostream>
using namespace std;


void decToBin(long long n){
	if(n>1)
		decToBin(n/2);
	cout<<n%2;
}
int main(){
	long long n;
	cin>>n;
	decToBin(n);
	
	return 0;
}
