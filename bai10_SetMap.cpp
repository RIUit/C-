#include<iostream>
#include<set>
using namespace std;



int main(){
	int n, m; cin >> n >> m;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	set<int>setB;
	for(int i = 0; i < m; i++){
		int x; cin >> x;
		setB.insert(x);
	}
	for(int x : a){
		if(setB.count(x)){
			cout << x << " ";
			setB.erase(x);
		}
	}
	return 0;
}
