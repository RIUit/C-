#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	long long tong=0;
	for(int i=1;i<=n;i++){
		if(n%i==0&&i%2==0)
			tong+=i;
	}
	cout<<tong<<endl;
	
	return 0;
	
}
