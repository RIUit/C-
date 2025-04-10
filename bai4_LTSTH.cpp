#include<iostream>
#include<cmath>
using namespace std;



bool nt(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
bool csnt(int n){
	 while(n != 0){
        int digit = n % 10;
        if(digit == 2 || digit == 3 || digit == 5 || digit == 7) return true;  
        n /= 10;                  
    }
    return false;  
}

int main(){
    int a, b; cin >> a >> b;
    int dem=0;
    for(int i = a; i <= b; i++){
        if(csnt(i) && nt(i)){
            dem++;
        }
    }
    cout<<dem<<endl;
}

