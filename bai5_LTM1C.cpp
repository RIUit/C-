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

int main(){
    int n, a[1000];
    cin >> n;
    nhap(a, n);
   
   cout<<a[0]<<" "<<a[n-1]<<endl;
   cout<<a[1]<<" "<<a[n-2]<<endl;
   if(n%2!=0){
   	cout<<a[(n/2)]<<endl;
   }else
   cout<<"28tech\n";
   
   return 0;
    
}

