#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b,a%b);
}
int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	
	int cnt=0;
	for(int i = 0 ;i < n;i++){
		for(int j = i + 1; j < n; j++){
			if(gcd(a[i],a[j])==1)
				cnt++;	
		}
	}
	cout<<cnt<<endl;
	
	return 0;
}
