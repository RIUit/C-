#include<iostream>
#include<set>
using namespace std;


int main(){
	int n;cin>>n;
	set<int>s;
	for(int i=0;i<n;i++){
		int c;cin>>c;
		s.insert(c);
	}
	int q;cin>>q;
	while(q--){
		int k;cin>>k;
		if(s.count(k))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	
	
	return 0;
}
