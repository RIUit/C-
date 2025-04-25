#include<iostream>
using namespace std;

long long mod = 1e9 + 7;

int main(){
	int n;
	long long tong = 0, tich = 1;
	cin >> n;
	long long a[n];
	
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n; i++){
		tong = (tong + a[i]) % mod;
		tich = (tich * a[i]) % mod;
	}
	cout << tong << endl;
	cout << tich << endl;
	
	return 0;
}
