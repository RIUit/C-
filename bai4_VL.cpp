#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;


int main(){
	int n;
	cin>>n;
	
	double tong=0;
	for(int i=1;i<=n;i++){
		tong+=1.0/i;
	}
	cout<<fixed<<setprecision(3)<<tong<<endl;
	
	
	return 0;
}
