#include<iostream>
using namespace std;


int main(){
	long long n;
	cin>>n;//Nhap so xu
	
	long long chai=n/28;
	long long vo=chai;
	
	while(vo>=3){
		long long new_Chai =vo/3;
		vo=vo%3;
		chai=chai+new_Chai;
		
		vo=vo+new_Chai;
	}
	cout<<chai<<endl;
	
	return 0;
}
