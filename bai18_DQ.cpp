#include<iostream>
using namespace std;


int sum_even(long long n){
	if(n<10){
		if(n%2==0) return n;
		else return 0;
	}else{
		if(n%10%2==0) return n%10+sum_even(n/10);
		else return sum_even(n/10);
		}
	}
int sum_odd(long long n){
	if(n<10){
		if(n%2!=0) return n;
		else return 0;
	}else{
		if(n%10%2!=0) return n%10+sum_odd(n/10);
		else return sum_odd(n/10);
	}
}
int main(){
	long long n;
	cin>>n;
	cout<<sum_even(n)<<endl;
	cout<<sum_odd(n)<<endl;
	
	return 0;
}
