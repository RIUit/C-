#include<iostream>
#include<cmath>
using namespace std;


int main(){
	int n;
	cin>>n;
	
	//1
	for(int i=0;i<=n;i+=3)
		cout<<i<<" ";
		
	cout<<endl;
	
	//2
	for(int i=0;i<=n;i++){
		if(pow(2,i)<=n)
			cout<<pow(2,i)<<" ";
	}
	cout<<endl;
	
	//3
	for(int i=n;;i++){
		if(i%17==0){
			cout<<i<<endl;
			break;
		}	
	}
	
	//4
	for(int i=n-1;;i--)
		if(i%7==0){
			cout<<i<<endl;
			break;
		}
	
	//5
	int dem=0;
	for(int i=1;i<=n;i=i+dem){
		cout<<i<<" ";
		dem++;
	}
	cout<<endl;
			
		
		
	
	
	return 0;
} 
