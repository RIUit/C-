#include<iostream>
using namespace std;



int main(){
	int n;
	cin>>n;
	int l=n,r=n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<l;j++)
			cout<<"  ";
		int x=i;
		for(int j=l;j<=r;j++){
			cout<<x<<" ";
			if(j<n) x++;
			else x--;
		}
		l--;r++;
		cout<<endl;
	}
	
	return 0;
}
