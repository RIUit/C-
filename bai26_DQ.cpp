#include<iostream>
#include<vector>
using namespace std;

// 1	4	4	4	5	6	7 
int lowerBound(vector<int>v,int x,int l,int r,int vt){
	if(l>r) return vt;
	int mid=(l+r)/2;
	if(v[mid]>=x){
		vt=mid;
		return lowerBound(v,x,l,mid-1,vt);
	}else
		return lowerBound(v,x,mid+1,r,vt);
	
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
	cout<<lowerBound(v,x,0,v.size()-1,n)<<endl;
	
	
	return 0;
}
