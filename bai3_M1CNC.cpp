#include<iostream>
using namespace std;


int main(){
	int n;
	cin >> n;
	
	int a[n];
	
	for(int &x : a) cin >> x;
	
	int max = INT_MIN;
	for(int i = 0; i < n; i++){
		if(a[i] > max){
			cout<<a[i]<<" ";
			max= a[i];
		}
	}
	
	return 0;
}
