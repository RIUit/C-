#include<iostream>
using namespace std;


int main(){
	long long n;
	cin>>n;
	
	int dem=0;
	while(n!=0){
		int tam=n%10;
		if(tam==2||tam==3||tam==5||tam==7)
			dem++;
		n/=10;
	}
	cout<<dem<<endl;
	
	return 0;
}
