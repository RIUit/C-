#include<iostream>
using namespace std;



int main(){
	int n;
	cin>>n;
	int l=1,r=n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j==l||j==r)
				cout<<i<<" ";
			else
				cout<<"  ";
		}
		l++;r--;
		cout<<endl;
	}
	
	return 0;
}
