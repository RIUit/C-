#include<iostream>
using namespace std;

const int MAX = 15;
void input(){
	
}
void khoiTao(int a[MAX][MAX],int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
}
void xuatMang(const int a[MAX][MAX],int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
void tongMT(int a[MAX][MAX],int b[MAX][MAX],int c[MAX][MAX],int n){
	for(int i =0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}
void tichMT(int a[MAX][MAX],int b[MAX][MAX],int c[MAX][MAX],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j] = 0;
			for(int k = 0;k<n;k++){
				c[i][j]=a[i][k]*b[k][j];
			}
		}
	}
}
int main(){
	int r, c;
	int a[MAX][MAX];
	int b[MAX][MAX];
	int tong[MAX][MAX];
	int tich[MAX][MAX];
	do{
		cout << "Nhap so hang va so cot : ";
		cin >> r >> c;
		if(r < 1 || r > MAX || c < 1 || c > MAX)
			cout << "Nhap hang va cot phai lon hon 0 !\n";
	}while(r < 1 || r > MAX || c < 1 || c > MAX);
	
	khoiTao(a,r,c);
	khoiTao(b,r,c);
	tongMT(a,b,tong,r);
	xuatMang(tong,r,c);
	tichMT(a,b,tich,r);
	
	
	
	
	return 0;
}
