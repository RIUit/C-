#include<iostream>
using namespace std;



int main(){
	int n;
	cin>>n;
	int l=n,r=n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<l;j++)
			cout<<"  ";
		for(int k=l;k<=r;k++)
			cout<<"* ";
		l--;r++;
		cout<<endl;
	}
	
	return 0;
}
