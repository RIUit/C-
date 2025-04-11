#include <bits/stdc++.h>
#include<iostream>
using namespace std;

const int mod = 1e9 + 7;
pair<int,int>numberMax(int a[],int n){
	int max=INT_MIN;
	int vt = -1;
	for(int i = 0; i < n; i++){
		if(a[i] > max){
			max = a[i];
			vt = i;
		}
	}
	return{max,vt};
}
pair<int,int>numberMin(int a[],int n){
	int min=INT_MAX;
	int vt = -1;
	for(int i = 0; i < n; i++){
		if(a[i] <= min){
			min = a[i];
			vt = i;
		}
	}
	return{min,vt};
}
int nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)	
			return 0;
	}
	return n > 1;
}
int demNT(int a[], int n){
	int dem=0;
	for(int i = 0;i < n; i++){
		if(nt(a[i]))
			dem++;
	}
	return dem;
}
long long tichMax(int a[], int n){
	sort(a, a + n);
	long long r1 = 1ll * a[0] * a[1];
	long long r2 = 1ll * a[n - 1] * a[n - 2];
	return (r1 > r2)? r1 : r2;
}
bool doiXungMang(int a[], int left, int right){
	if(left >= right) return true;
	if(a[left] != a[right]) return false;
	return doiXungMang(a, left + 1, right - 1);
}
long long tichPTMang(int a[], int n){
	long long tich = 1;
	for(int i = 0; i < n; i++){
		tich = (tich * (a[i] % mod)) % mod;
	}
	return tich;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int &x : a) cin >> x;
	
	pair<int,int> re1 = numberMax(a, n);
	cout << re1.first << " " << re1.second << endl;
	
	
	pair<int,int> re2 = numberMin(a, n);
	cout << re2.first << " " << re2.second << endl;
	 

	cout << demNT(a, n) << endl;
	
	cout << tichMax(a, n) << endl;
	
	if(doiXungMang(a,0,n-1)){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
	cout << tichPTMang(a, n) << endl;
		
	return 0;
}
