#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	long long a,b;
	cin>>a>>b;
	long long m = min(a,b);
	
	long long tich=1;
	for(int i=1;i<=m;i++){
		tich*=i;
	}
	cout<<tich;
	return 0;
}
