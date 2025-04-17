#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	int a[n];
	
	int dem=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==0&&i%2==0){
			cout<<a[i]<<" ";
			dem++;
		}
	}
	if(dem==0) 
		cout<<"NONE\n";
	
	
	return 0;
}
