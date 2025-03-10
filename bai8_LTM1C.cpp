#include<iostream>
using namespace std;


void nhapMang(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
int main(){
	int n;
	cin>>n;
	
	int a[n];
	nhapMang(a,n);
	int smax=-1;			  		 // 6				3 4 5 7
	for(int i=0;i<n;i++){			// 3 4 2 5 1 7
		if(a[i]>smax){
			smax=a[i];
			cout<<a[i]<<" ";
		}
	}
	
	
	system("pause");
	return 0;
}
