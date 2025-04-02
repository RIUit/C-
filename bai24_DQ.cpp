#include<iostream>
#include<vector>
using namespace std;


bool isMangTang(vector<int>v,int n){
	if(n == v.size()-1) return true;
	if(v[n]>=v[n+1]) return false;
	return isMangTang(v,n+1);
}
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
		
	if(isMangTang(v,0))
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
