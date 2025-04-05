#include<iostream>
#include<iomanip>
using namespace std;


int main(){
	int n;
	cin>>n;
	double tong=0;
	long long mau=1;
	for(int i=0;i<n;i++){
		tong+=1.0/mau;
		mau=mau*(i+1);
	}
	cout<<fixed<<setprecision(4)<<tong<<endl;
	
	
	return 0;
}
