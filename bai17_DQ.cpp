#include<iostream>
using namespace std;


void print_right_to_left(long long n){
	if(n<10){
		cout<<n<<" ";
		return;
	}
	cout<<n%10<<" ";
	print_right_to_left(n/10);
}
void print_left_to_right(long long n){
	if(n<10){
		cout<<n<<" ";
		return;
	}
	print_left_to_right(n/10);
	cout<<n%10<<" ";	
}
	
int main(){
	long long n;
	cin>>n;
	
	print_left_to_right(n);
	cout<<endl;
	print_right_to_left(n);

	return 0;
}
