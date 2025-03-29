#include<iostream>
using namespace std;


int fibonassi(int n){
	if(n==1) return 0;
	if(n==2) return 1;
	return fibonassi(n-1)+fibonassi(n-2);
}
int main(){
	int n;
	cin>>n;
	
	cout<<fibonassi(n)<<endl;
	
	return 0;
} 
