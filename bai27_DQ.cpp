#include<iostream>
#include<vector>
using namespace std;

// 	6
//	6 5 5 4 3 2
//	4

int upperBound(vector<int>v,int x,int l,int r,int vt){
	if(l>r) return vt;
	int mid=(l+r)/2;
	if(v[mid]>x){
		vt=mid;
		return upperBound(v,x,mid+1,r,vt);
	}else
		return upperBound(v,x,l,mid-1,vt);
	
}
int main(){
	//Nhap theo kieu tang dan
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	
	int x;
	cin>>x;
	cout<<upperBound(v,x,0,v.size()-1,n)<<endl;
	
	
	return 0;
}
