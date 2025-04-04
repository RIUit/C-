#include<iostream>
using namespace std;


int chap(int n,int k){
	if(n==k||k==0) return 1;
	return chap(n-1,k-1)+chap(n-1,k);
}
int giaithua(int n){
	if(n==0||n==1) return 1;
	return n*giaithua(n-1);
}
int main(){
	int n,k;
	cout<<"Nhap k va n : ";
	cin>>k>>n;
	cout<<"Tinh chap : "<<chap(n,k)<<endl;
	cout<<"Tinh giai thua cua n : "<<giaithua(n)<<endl;
	return 0;
}
