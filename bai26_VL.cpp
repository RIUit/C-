#include<iostream>
using namespace std;


int main(){
	int a,b,n;
	cin >> a >> b >> n;
	int k = 0;
	for(int x = 0;x <= n / a;x++){
		if((n - a * x) % b == 0){
				k=1;
			break;
		}
	}
	if(k == 1) cout<<"YES\n";
	else cout<<"NO\n";
}
