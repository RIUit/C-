#include<iostream>
using namespace std;

void nhapMang(int a[],int n){
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
} 
//void xuatMang(int a[],int n){
//	for (int i = 0; i < n; i++) {
//		cout<<a[i]<<" "; 
//	}
//} 
int main() {
	int n;
	cin >> n;

	int a[n];
	nhapMang(a,n); 
	
	int chan=0,le=0; 
	for(int i=0;i<n;i++){
		if(a[i]%2==0)
		++chan;
		else
		++le; 
	} 
	cout<<chan<<" "<<le<<endl;


	system("pause");
	return 0;
}
