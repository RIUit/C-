#include<iostream>
using namespace std;

int solve(int a,int b,int c){
	cout<<"28tech.com.vn\n";
	cout<<2*a<<" "<<3*b<<" "<<4*c<<endl;
	return a*b*c;
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	cout<<solve(a,b,c)<<endl;
	
	return 0;
}
