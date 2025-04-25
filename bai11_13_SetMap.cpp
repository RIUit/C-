#include<iostream>
#include<set>
using namespace std;


int main(){
	int n, m; cin >> n >> m;
	
	set<int> s1;
	for(int i = 0; i< n; i++){
		int x; cin >> x;
		s1.insert(x);
	}
	
	set<int>s2;
	for(int i = 0; i < m; i++){
		int x; cin >> x;
		s2.insert(x);
	}
	
	for(int x : s1){
		if(s2.count(x) == 0){
			cout << x << " ";
		}
	}
	
	return 0;
}
