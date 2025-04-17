#include<iostream>
using namespace std;


int main(){
	int n;cin>>n;
	char a[n];
	for(char &x:a){
		cin>>x;
		x=tolower(x);
	} 
	char nguyen_am[1001],phu_am[1001];
	int cnt1=0,cnt2=0;
	for(char x:a){
		if(x=='u'||x=='e'||x=='a'||x=='o'||x=='i'){
			nguyen_am[cnt1]=x;
			cnt1++;
		}else{
			phu_am[cnt2]=x;
			cnt2++;
		}
	}
	for(int i=0;i<cnt1;i++){
		cout<<nguyen_am[i]<<" ";
	}
	cout<<endl;
	for(int j=cnt2-1;j>=0;j--){
		cout<<phu_am[j]<<" ";
	}
	
	
	return 0;
}
