#include<iostream>
using namespace std;

int sumDigit(long long n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main(){
	long long n;
	cin>>n;
	
	
	while(n>=10){
		n=sumDigit(n);
	}
	cout<<n<<endl;
	
	return 0;
}
