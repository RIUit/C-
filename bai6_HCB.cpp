#include<iostream>
using namespace std;


int sum_digit(long long n){
	int tong=0;
    while(n!=0){
    	tong+=n%10;
    	n/=10;
	}
	return tong;
}

int main(){
    int n; cin >> n;
    long long x;
    for(int i = 1; i <= n; i++){
        cin >> x;
        cout << sum_digit(x) << " ";
    }
    return 0;
}

