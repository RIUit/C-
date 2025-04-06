#include<iostream>
using namespace std;



int main(){
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		int x;
		if(i%2==0) x=1;
		else x=0;
		for(int j=1;j<=n;j++){
			cout<<x;
			x=1-x;
		}
		cout<<endl;
	}
	
	return 0;
}
