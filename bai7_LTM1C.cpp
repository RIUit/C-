#include<iostream>
using namespace std;

void nhap(int a[], int n){
for(int i=0;i<n;i++)
	cin>>a[i];
}

int main(){
    int n, a[1000];
    cin >> n;
    nhap(a, n);
   
   for(int i=0;i<n-1;i++){
   	if(a[i+1]>a[i]){
   		cout<<a[i+1]<<" ";
	   }
   }
   
   return 0;
    
}

