#include<iostream>
using namespace std;

void nhap(int a[], int n){
for(int i=0;i<n;i++)
	cin>>a[i];
}

void in(int a[], int n){
for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}

void thaydoi(int a[], int n){
for(int i=0;i<n;i++)
	a[i]=a[i]*2;
}

int main(){
    int n, a[1000];
    cin >> n;
    nhap(a, n);
    thaydoi(a, n);
    in(a, n);
}

