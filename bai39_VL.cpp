#include<iostream>
using namespace std;



int main(){
	int n;
	cin>>n;
	char x1 ='A';
	for(int i=1;i<=n;i++){
		char x2=x1;
		if(x2%2==0) x2=tolower(x2);
		for(int j=1;j<=n;j++){
			cout<<x2;
			x2++;
		}
		x1++;
		cout<<endl;
	}
	
	return 0;
}
