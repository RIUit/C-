#include<iostream>
using namespace std;



void nhap(int a[200][200],int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
}
void xuat(int a[200][200],int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<" ";
		
		}
		cout<<endl;
	}
}

int main(){
	int r,c;
	cin>>r>>c;
	int a[200][200];
	
	nhap(a,r,c);
	
	
	for(int i=0;i<r;i++){
		long long sumR=0;
		for(int j=0;j<c;j++){
			sumR+=a[i][j];
		}
		cout<<sumR<<" ";
	}
	cout<<endl;
	
	
	for(int i=0;i<c;i++){
		long long sumC=0;
		for(int j=0;j<r;j++){
			sumC+=a[j][i];
		}
		cout<<sumC<<" ";
	}
	cout<<endl;
	
	
	
	return 0;
}
