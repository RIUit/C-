#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long long n;
	cin>>n;
	
	int tong=0;
	while(n>=10){
		int sau=n%10;
		n/=10;
		int truoc=n%10;
		tong+=abs(truoc-sau);
	}
	cout<<tong<<endl;
	
	
	return 0;
}
