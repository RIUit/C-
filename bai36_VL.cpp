#include<iostream>
using namespace std;



int main(){
	int n;
	cin>>n;
	int l=n,r=n;
	for(int i=1;i<=2*n-1;i++){
		for(int j=1;j<l;j++)
			cout<<"  ";
		for(int j=l;j<=r;j++)
			cout<<"* ";
		cout<<endl;
		if(i<n){
			l--;r++;
		}
		else{
			l++;r--;
		}
	}
	
	return 0;
}
