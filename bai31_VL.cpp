#include<iostream>
#include<iomanip>
using namespace std;


int main(){
	int n;
	cin>>n;

	long long mau=1;
	double sum=0;
	for(int i=0;i<n;i++){
		sum+=1.0/mau;
		mau=mau*(i+1);	
	}
	cout<<fixed<<setprecision(2)<<sum<<endl;
	return 0;
}
