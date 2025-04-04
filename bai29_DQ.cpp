#include<iostream>
#include<cmath>
using namespace std;

void hanoi(int dia,int bandau,int chuyendoi,int trungian){
	if(dia==1){
		cout<<bandau<<" "<<chuyendoi<<endl;
		return;
	}
	hanoi(dia-1,bandau,trungian,chuyendoi);
	
	cout<<bandau<<" "<<chuyendoi<<endl;	
	
	hanoi(dia-1,trungian,chuyendoi,bandau);
}
int main(){
	int n;cin>>n;
	//cout<<pow(2,n)-1<<endl;
	cout<<(1<<n)-1<<endl;
	hanoi(n,1,3,2);
	
	
	return 0;
}
