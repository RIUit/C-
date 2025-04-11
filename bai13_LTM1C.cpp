#include<iostream>
using namespace std;


int main(){
	int x,i=0;
	int a[50000];
	while(cin >> x){
		a[i]=x;
		i++;
	}
	for(int j=i-1;j>=0;j--)
		cout<<a[j]<<" ";

	
	
	return 0;
}
