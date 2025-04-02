#include<iostream>
#include<vector>
using namespace std;


bool allEven(vector<int>v,int n){
	if(n == v.size()) return true;
	if(v[n]%2!=0) return false;
	return allEven(v,n+1);
}
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
		
	if(allEven(v,0))
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
