#include<iostream>
using namespace std;


bool so_giam(int n){
    while(n>=10){
    	int digit_cuoi=n%10;
    	int digit_sau=n/10%10;
    	if(digit_sau<=digit_cuoi)
    		return false;
    	n/=10;
	}
	return true;
}

int main(){
    int a, b; cin >> a >> b;
    bool found = false;
    for(int i = a; i <= b; i++){
        if(so_giam(i)){
            cout << i << " ";
            found = true;
        }
    }
    if(!found) cout << "28tech\n";
}

