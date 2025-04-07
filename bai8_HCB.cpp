#include<iostream>
using namespace std;


bool so_dep(int n){
	int c=0,l=0;
    while(n){
    	int t=n%10;
    	if(t%2==0) c++;
    	else l++;
    	n/=10;
	}
	return c==l;
}

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        if(so_dep(i)){
            cout << i << " ";
        }
    }
    return 0;
}

