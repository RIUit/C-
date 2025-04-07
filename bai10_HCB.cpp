#include<iostream>
using namespace std;



bool chanle(int n){
    int c=0,l=0;
    while(n){
    	int t=n%10;
    	if(t%2==0) c++;
    	else l++;
    	n/=10;
	}
	return c>l;
}

bool check(int n){
    int sum=0;
    while(n!=0){
    	sum+=n%10;
    	n/=10;
	}
	return chanle(sum);
}

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        if(check(i)){
            cout << i << " ";
        }
    }
}

