#include<iostream>
using namespace std;


int main(){
	long long n;
	cin>>n;
	
	int dem=0;
	int tam=n;
	while(tam!=0){
		dem++;
		tam/=10;
	}
	
	if(dem%2==0)
		cout<<"NOT FOUND\n"; 
	else{
		
		int phanTuBo = dem / 2;
		
		for(int i = 1;i <= phanTuBo;i++)
			n/=10;
			
		cout<<n%10;
	}
	return 0;
}
