#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		int x;cin>>x;
		if(x%2==0)
			cout<<"EVEN\n";
		else
			cout<<"ODD\n";
	}

	return 0;
}
