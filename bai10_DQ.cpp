#include<iostream>
#include<iomanip>
using namespace std;

double tong(int n){
	if(n==1) return 1;
	return 1.0/n + tong(n-1);
}
int main(){
	int n;
	cin>>n;
	cout<<fixed<<setprecision(3)<<tong(n)<<endl;
	
	return 0;
}
