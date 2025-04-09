#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	cin>>s;
	if(s.size()%2!=0){
		cout<<s[s.size()/2];
	}else
		cout<<"NOT FOUND\n";
		
	return 0;
}
