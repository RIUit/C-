#include<iostream>
using namespace std;


bool so_tang(int n){
    while(n>=10){
    	int digit_cuoi=n%10;
    	int digit_sau=n/10%10;
    	if(digit_sau>=digit_cuoi)
    		return false;
    	n/=10;
	}
	return true;
}

int main(){
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(so_tang(i)){
            cout << i << " ";
        }
    }
    return 0;
}

