#include<iostream>
using namespace std;


bool palindrome(int n){
    int tam=0;
    int n1=n;
    while(n!=0){
    	tam=tam*10+n%10;
    	n/=10;
	}
	return tam==n1;	
}

int main(){
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(palindrome(i)){
            cout << i << " ";
        }
    }
}

