#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool cmd(int a, int b){
	if(a % 2 == 0 && b % 2 != 0)
		return false;
	if(a % 2 != 0 && b % 2 == 0)
		return true;
	if(a % 2 == 1 && b % 2 == 1)
		return a > b;
	return a < b;
}
int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	
	sort(a, a+n, cmd);
	for(int c : a)
		cout << c << " ";
	
	return 0;
}
