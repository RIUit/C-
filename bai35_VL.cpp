#include<iostream>
using namespace std;



int main(){
	int n;
	cin>>n;
	int l=1,r=2*n-1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<l;j++)
			cout<<"  ";
		for(int j=l;j<=r;j++)
			cout<<"* ";
		l++;r--;
		cout<<endl;
	}
	
	return 0;
}
