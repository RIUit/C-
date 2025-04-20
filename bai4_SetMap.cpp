#include<iostream>
#include<set>
using namespace std;


int main(){
	int n;cin>>n;
	multiset<int> se;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		se.insert(x);
	}
	int q;cin>>q;// so lan can truy van
	while(q--){
		int tt,valu;//Thao tac de bai can 1,2... valu luu gia tri can chen
		cin>>tt>>valu;
		if(tt == 1)
			se.insert(valu);// them phan tu vao mang
		else if(tt == 2){
			auto it = se.find(valu);// tro den phan tu 2 dau tien neu mang co 1 ->2 2 2 2 2 2 4 5
			if(it != se.end())
				se.erase(it);
		}else{
			auto it = se.find(valu);
			if(it != se.end())
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
	}
	
	
	return 0;
}
