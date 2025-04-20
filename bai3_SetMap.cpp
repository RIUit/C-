#include<iostream>
#include<set>
using namespace std;

int main(){
	int n;cin>>n;
	set<int>s;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		if(s.count(x) == 0){
			cout<<x<<" ";
			s.insert(x);
		}
	}
	
	
	return 0;
}
