#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Student{
	private:
		string mssv,hoten,ngaysinh,lop;
		double gpa;
	public:
		
		Student(){}
		Student(string mssv,string hoten,string ngaysinh,string lop,double gpa)	{
			this->mssv=mssv;
			this->hoten=hoten;
			this->ngaysinh=ngaysinh;
			this->lop=lop;
			this->gpa=gpa;
		}
		void nhap() {
			getline(cin, mssv);
			getline(cin, hoten);
			getline(cin, ngaysinh);
			getline(cin, lop);
			cin >> gpa;
		}
		void in(){
			cout<<mssv<<" "<<hoten<<" "<<ngaysinh<<" "<<lop<<" "<<fixed<<setprecision(2)<<gpa<<endl;
		}
};
int main(){
	Student x;
	x.nhap();
	x.in();
	
	
	
	return 0;
}
