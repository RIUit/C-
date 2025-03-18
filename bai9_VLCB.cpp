#include<iostream>
using namespace std;

int main(){
	long long n;
	cin>>n;
	
	int chan=(n==0)?1:0;
	int le=0;
	while(n!=0){
		int chuSo=n%10;
		if( chuSo % 2 == 0)
			chan++;
		else 
			le++;
		n/=10;
	}
	
	if(le<chan)
		cout<<"28tech\n";
	else
		cout<<"29tech\n";
	
	
	return 0;
}
