#include<iostream>
#include<cmath>
using namespace std;



int main(){
	int n;
	cin>>n;
	
	long long tich=1;
	for(int i=n;i>0;i--){
		tich*=i;
	}
	cout<<tich<<endl;
	
	return 0;
}
