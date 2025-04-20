#include<iostream>
#include<set>
#include<algorithm>
using namespace std;


int main(){
//	int n;cin>>n;
//	set<int>s;// la tap hop cac phan tu khong trung nhau va dc sap xep tang dan 
//	for(int i=0;i<n;i++){
//		int x;cin>>x;
//		s.insert(x);
//	}
//	cout<<s.size()<<endl;
	
	int n;cin>>n;
	int a[n];
	for(int &x:a)cin>>x;
	sort(a,a+n);
	int cnt=0;
	for(int i=1;i<n;i++){
		if(a[i]>a[i-1])
			cnt++;
	}
	cout<<cnt+1<<endl;
	
	
	return 0;
}
