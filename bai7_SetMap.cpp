#include<iostream>
#include<map>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n][n];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	
	map<int,int>mp;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(mp[a[i][j]] == i){	
				mp[a[i][j]] = i + 1;
			}
		}
	}
	bool ok = false;
	for(pair<int,int> p : mp){
		if(p.second == n){
			cout << p.first << " ";
			ok = true;
		}
	}
	if(!ok){
		cout << "NOT FOUND";
	}
	
	
	return 0;
}
