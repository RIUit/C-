#include<iostream>
#include<set>
#include<map>
using namespace std;


int main(){
	int n; cin >> n;
	set<pair<int, int>> se;
	for(int i = 0; i < n; i++){
		int x,y; cin >> x >> y;
		se.insert({x,y});
	}
	cout << se.size() << endl;	
	return 0;
}
