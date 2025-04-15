#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
	int n;cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		v.push_back(x);
	}
	
	sort(v.begin(),v.end());
	
	for(vector<int>::iterator it = v.begin();it<v.end();++it){
		cout<<*it<<" ";
	}
	cout<<endl;
	
	sort(v.begin(),v.end(),greater<int>());
	
	for(vector<int>::iterator it = v.begin();it<v.end();it++){
		cout<<*it<<" ";
	}
	return 0;
}
