#include<iostream>
using namespace std;



int main(){
	long long n;
	cin>>n;
	
	int max=(n==0)?0:-1;
	while(n!=0){
		int chuso=n%10;
		if(chuso>=max){
			max=chuso;
		}
		n/=10;	
	}
	cout<<max<<endl;
	
	return 0;
}
