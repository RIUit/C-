#include<iostream>
using namespace std;


void check(long long n,int d[]){
	if(n==0)
		d[0]++;
	else{
		while(n){
			int tam = n % 10;
			d[tam]++;
			n /=10;
		}
	}
}
int main(){
	long long n;
	cin>>n;
	
	long long a[n];
	int d[10]={0};
	
	for(long long &x : a) cin>>x;
	
	for(long long x : a){
		check(x,d);
	}
	for(int i =0;i<10;i++){
		if(d[i]>0){
			cout<<i<<" "<<d[i]<<endl;
		}
			
	}
	
	return 0;
}
