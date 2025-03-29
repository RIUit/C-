#include<iostream>
using namespace std;


int tinhChap(int n,int k){
	if(k == 0 || n == k) return 1;
	return tinhChap(n - 1,k - 1) + tinhChap(n - 1,k);
}
int main(){
	int n,k;
	cin >> n >> k;
	
	cout << tinhChap(n,k) << endl;
	
	return 0;
} 
