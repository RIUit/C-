#include<iostream>
#include <bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int main(){
	string s;
	
	vector<string> v;
	while(cin>>s)
		v.push_back(s);
	
	sort(v.begin(),v.end());
	for(string c : v)
		cout<<c<<" ";
	
	cout<<endl;
	
	sort(v.begin(),v.end(),greater<string>());
	for(string c : v)
		cout<<c<<" ";
	
	cout<<endl;
	return 0;
}
