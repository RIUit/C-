#include<iostream>
using namespace std;

int is_even(long long n){
	if(n<10){
		if(n%2==0) return true;
		else return false;
	}else if(n%10%2!=0) return false;
	return is_even(n/10);
	
}
int main(){
	long long n;
	cin>>n;
	
	if(is_even(n))
		cout<<"YES\n";
	else
		cout<<"NO\n";
	
	
	return 0;
}
