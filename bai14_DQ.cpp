#include<iostream>
using namespace std;

int demN(long long n){
	if(n<10) return 1;
	return 1+ demN(n/10); 
}
int main(){
	long long n;
	cin>>n;
	cout<<demN(n)<<endl;
	
	return 0;
}
