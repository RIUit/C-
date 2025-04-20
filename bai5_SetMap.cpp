#include<iostream>
#include<map>
using namespace std;


int main(){
	int n;
	cin>>n;
	map<char,int>mp;	
	for(int i=0;i<n;i++){
		char x;cin>>x;
		mp[x]++;
	}
	auto it1 = mp.begin();
	auto it2 = mp.rbegin();
	cout << it1 -> first << " " << it1->second << endl << endl;
	cout << it2 -> first << " " << it2->second << endl << endl;
	
	for(pair<char,int> p : mp){
		cout << p.first << " " << p.second << endl;
	}
	cout << endl;
	
	for(auto it = mp.rbegin();it != mp.rend();it++){
		cout << it -> first << " " << it -> second << endl;
	}
	return 0;
}
