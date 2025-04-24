#include<iostream>
#include<set>
using namespace std;



int main(){
	int n, m;cin >> n >> m;
	set<int> hop;
	for(int i = 0; i < n; i++){
		int x;cin >> x;
		hop.insert(x);
	}
	for(int i = 0; i < m; i++){
		int x;cin >> x;
		hop.insert(x);
	}
	for( auto it = hop.rbegin();it != hop.rend(); ++it)
		cout << *it << " ";
	
	
	return 0;
}
