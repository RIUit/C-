#include<iostream>
using namespace std;


int main(){
	int n;
	long long sumOdd=0,sumEven=0;
	int cntOdd=0,cntEven=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==0){
			++cntEven;
			sumEven+=a[i];
		}else{
			++cntOdd;
			sumOdd+=a[i];
		}
	}
	
	cout<<cntEven<<endl;
	cout<<cntOdd<<endl;
	cout<<sumEven<<endl;
	cout<<sumOdd<<endl;
	return 0;
}
