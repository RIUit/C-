#include<iostream>
#include<cmath>
using namespace std;



int main(){
	int n;
	cin>>n;
	
	long long tong=0;
	for(int i=1;i<=n;i++){
		tong+=i*2-1;
	}
	cout<<tong<<endl;
	
	return 0;
}
