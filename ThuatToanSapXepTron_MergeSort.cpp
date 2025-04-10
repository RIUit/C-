#include<iostream>
using namespace std;


void merge(int a[],int l,int m,int r){
	int n1=m-l+1;//So phan tu cho mang 1
	
	int n2=r-m;//So phan tu cho mang 2
	
	int x[n1],y[n2];
	
	for(int i=0;i<n1;i++){
		x[i]=a[l+i];
	}
	
	for(int i=0;i<n2;i++){
		y[i]=a[m+1+i];	
	}
	//Tron 2 mang tren lai
	int tam=l;//de luu lai phan tu l+r
	int i=0,j=0;
	while(i < n1 && j < n2){
		if(x[i] <= y[j])
			a[tam++] = x[i++];
		else
			a[tam++] =y[j++];
	}
	while(i<n1){
		a[tam++] = x[i++];
	}
	while(j<n2){
		a[tam++] = y[j++];
	}
}
void mergeSort(int a[], int l, int r){
	if(l < r){
		int m = (l + r) / 2;
		mergeSort(a,l,m);
		mergeSort(a,m+1,r);
		merge(a,l,m,r);
	}
}
int main(){
//	//Thao tac tron Merge
//	int n,m;
//	cin>>n>>m;
//	
//	int a[n],b[m];
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(int j=0;j<m;j++){
//		cin>>b[j];
//	}
//	int i=0,j=0;
//	int c[n+m];
//	int k=0;
//	while(i<n&&j<m){
//		if(a[i]<=b[j]){
//			c[k++]=a[i++];
//		}else{
//			c[k++]=b[j++];
//		}
//	}
//	while(i<n){
//		c[k++]=a[i++];
//	}
//	while(j<m){
//		c[k++]=b[j++];
//	}
//	
//	for(int i=0;i<n+m;i++){
//		cout<<c[i]<<" ";
//	}
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	mergeSort(a,0,n-1);
	
	for(int i=0 ;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	
	return 0;
}
