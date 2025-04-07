#include<iostream>
using namespace std;


bool chua6(int n){
    while(n!=0){
    	int digit=n%10;
    	if(digit==6) return true;
    	n/=10;
	}
	return false;
}

bool tongchan(int n){
	int sum=0;
    while(n!=0){
    	sum+=n%10;
    	n/=10;
	}
	return sum%2==0;
}

bool chanle(int n){
    int c=0,l=0;
    while(n){
    	int t=n%10;
    	if(t%2==0) c++;
    	else l++;
    	n/=10;
	}
	return c<l;
}

int main(){
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(chua6(i) && tongchan(i) && chanle(i)){
            cout << i << " ";
        }
    }
}

