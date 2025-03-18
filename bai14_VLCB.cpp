#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	int a,b;
	cin>>a>>b;
	
	bool ok=false;
	for(int i=min(a,b);i<=max(a,b);i++){
		if(i%2==0||i%3==0||i%5==0){
			cout<<i<<" ";
			ok=true;
		}
	}
	if(!ok)
		cout<<"28tech";
		
	return 0;
}
