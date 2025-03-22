#include<iostream>
using namespace std;


int main(){
	long long n;
	cin>>n;
	
	int tong=0;
	while(n!=0){
		int tam=n%10;
		tong+=tam;
		n/=10;
	}
	cout<<tong<<endl;
	
	return 0;
}
