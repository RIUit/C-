#include<iostream>
using namespace std;


int main(){
	long long n;
	int dem=0;
	cin>>n;
	if(n==0){
		cout<<1<<endl;
		return 0;
	}else{
		while(n!=0){
			dem++;
			n/=10;
	}
	cout<<dem;
	}

	
	
	return 0;
}
