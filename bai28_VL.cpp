#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	
	int gt=1;
	int sum=0;
	for(int i=1;i<=n;i++){
		gt*=i;
		sum+=gt;
	}
	cout<<sum<<endl;
	
	
	return 0;
}
