#include<iostream>
#include<map>
#include<set>
using namespace std;


int main(){
	int n;cin >> n;
	set<int>se;
	for(int i = 0; i < n; i++){
		int x;cin >> x;
		se.insert(x);
	}
	int q;cin >> q;
	while(q--){
		int tt;cin >> tt;
		if(tt == 1){
			int gt;cin>>gt;
			se.insert(gt);
		}else if(tt == 2){
			int gt;cin>>gt;
			if(se.count(gt))
				se.erase(gt);
		}else if(tt == 3){
			auto it = se.begin();
			cout << *it <<endl;
		}else if(tt == 4){
			auto it = se.rbegin();
			cout << *it << endl;
		}
	}
	
	
	return 0;
}
