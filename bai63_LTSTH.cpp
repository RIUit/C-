#include<iostream>
#include<climits>
using namespace std;

long long F[1000005]; 
int main(){
	

	long long mod=1e9+7;
	F[1]=0;
	F[2]=1;
	for(int i=3;i<=1000000;i++){
		F[i]=F[i-1]+F[i-2];
		F[i]%=mod;
	}
	long long n;
	cin>>n;
	
	for(int i=0;i<=1000000;i++){
		if(i==n)
		cout<<F[i];
	}
	return 0;
}
