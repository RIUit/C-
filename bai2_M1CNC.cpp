#include<iostream>
using namespace std;

bool check_Mang_Tang(int a[], int n, int i = 1){
	if(i == n) return true;
	if(a[i - 1] >= a[i]) return false;
	return check_Mang_Tang(a, n, i + 1);
}
int main(){
	int n;
	cin>>n;
	
	int a[n];
	for(int &x : a) cin >> x;
	if(check_Mang_Tang(a,n))
		cout<<"YES";
	else
		cout<<"NO";
	
	
	return 0;
}
