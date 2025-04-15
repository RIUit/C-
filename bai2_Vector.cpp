#include<iostream>
#include<vector>
using namespace std;


int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int x;cin>>x;
	while(x--){
    int tt;
    cin >> tt;
    if(tt == 1){
		int vt,val;
		cin>>vt>>val;
		if(vt>=0&&vt<=v.size())
			v.insert(v.begin()+vt,val);
    }
    else{
		int vt;cin>>vt;
		if(vt>=0&&vt<=v.size())
			v.erase(v.begin()+vt);
   		}
	}
	if(v.size()==0) cout<<"EMPTY\n";
	else
		for(int x:v)
			cout<<x<<" ";
	return 0;
}
