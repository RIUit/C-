#define ll long long
#include<iostream>
using namespace std;


ll rev(ll n){
    ll tam=0;
    while(n!=0){
    	tam=tam*10+n%10;
    	n/=10;
	}
	return tam;
}

int main(){
    ll n; cin >> n;
    cout << rev(n);
    return 0;
}

