#include<iostream>
#include<set>
using namespace std;



int main(){
	int n, m; cin >> n >> m;
	
	set <int> hop, giao;
	int a[n];
	
	for(int &x : a){
		cin >> x;
		hop.insert(x);
	}
	
	set <int> s2;
	for(int i = 0; i < m; i++){
		int x; cin >> x;
		hop.insert(x);
		s2.insert(x);
	}
	
	for(int x : a){
		if(s2.count(x)){
			giao.insert(x);
		}
	}
	
	for(int x : hop){
		if(giao.count(x) == 0){
			cout << x << " ";
		}
	}
	return 0;
}
