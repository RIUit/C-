#include<iostream>
using namespace std;

using ll=long long;
ll ucln(ll a,ll b){
	if(b == 0) return a;
	return ucln(b,a%b);
}
ll bcnn(ll a,ll b){
	if(b == 0) return a;
	return a/ucln(a,b) * b;
}
int main(){
	ll a,b;
	cin >> a >> b;
	cout<<ucln(a,b)<<" "<<bcnn(a,b)<<endl;

	
	return 0;
} 
