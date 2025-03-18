#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	
	//1
	int i=3;
	while(i<=n){
		cout<<i<<" ";
		i+=3;	
	}
	cout<<endl;
	
	//2
	int i1=0;
	while(i1<=n){
		cout<<i1<<" ";
		i1+=15;	
	}
	cout<<endl;
	
	//3
	for(int i = n; ; i++){
		if(i%7==0){
			cout<<i<<" ";
			break;
		}
	}
	cout<<endl;
	
	//4
	for(int i = n; i >= 0; i--){
    	if(i%9==0){
    		cout<<i<<" ";
    		break;
		}
	}
	cout<<endl;
	//5
	for(int i=1;i<=n;i++){
		cout<<2*i-1<<" ";
	}
	return 0;			
}
