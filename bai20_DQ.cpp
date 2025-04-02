#include<iostream>
#include <climits>
#include<iomanip>
#include<algorithm>
using namespace std;

int solve(long long n){
	if(n==1) return 0;
	int x=INT_MAX,y=INT_MAX,z=INT_MAX;
	if(n%2==0)
		x= 1 + solve(n/2);
	if(n%3==0)
		y= 1 + solve(n/3);
	if(n>1)
		z= 1 + solve(n-1);
	return min({x,y,z});
}
int main(){
	long long n;
	cin>>n;
	
	cout<<solve(n)<<endl;
	
	
	return 0;
}
