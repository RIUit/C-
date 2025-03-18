#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	
	//1
	for(int i=1;i<=n;i++){
		cout<<i<<" ";
	}
	cout<<endl;
	
	//2
	int tam=n;
	while(tam>=0){
		cout<<tam--<<" ";
	}
	cout<<endl;
	
	//3
	for(int i=0;i<=n;i++){
		if(i%2==0)
			cout<<i<<" ";
	}
	cout<<endl;
	
	//4
	int i=0;
	while(i<=n){
	 	if(i%2!=0){
	 		cout<<i<<" ";	
		 }
		i++;	
	}
	cout<<endl;
	
	//5
	for(int i=0;i<n;i+=4){
		cout<<i<<" ";
	}
	cout<<endl;
	
	//6
	int k=0;
	while(k<n){
		cout<<(char)('a'+k)<<" ";
		k++;
	}
	cout<<endl;

	//7
	for(char i='z'-(n-1);i<='z';i++){
		cout<<i<<" ";
	}

	
	return 0;
	
}
