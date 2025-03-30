#include<iostream>
#include<algorithm>
using namespace std;

long long maxChuSo(long long n){
	if(n<10) return n;
	return max(n%10,maxChuSo(n/10));
}
long long minChuSo(long long n){
	if(n<10) return n;
	return min(n%10,minChuSo(n/10));
}
int main(){
	long long n;
	cin>>n;
	
	cout<<maxChuSo(n)<<" "<<minChuSo(n)<<endl;
	
	return 0;
}
