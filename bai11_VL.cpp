#include<iostream>
using namespace std;
using ll=long long;


int main(){
	int n;
	cin>>n;
	
	long long tong=0;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			tong+=i;
		}else
			tong-=i; 
	}
	cout<<tong<<endl;
	
	
	return 0;
}
