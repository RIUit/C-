#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
										// *****	i=1		j=5*	n+1 - i = j
	for(int i=1;i<=n;i++){				// ****		  2	 	  4*	
		for(int j=1;j<=n+1-i;j++){	    // ***		  3	  	  3*
			cout<<"*";					// **		  4		  2*
		}								// *		  5	  	  1*
		cout<<endl;
	}
	cout<<endl;
	
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j<=n-i)
					cout<<" ";
				else cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j<=i-1)
					cout<<" ";
				else cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==n||j==1||i==j)
					cout<<"*";
				else cout<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
} 
