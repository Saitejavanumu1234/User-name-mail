#include<iostream>
#include<string>
using namespace std;
int main()
{
	string email="saitejavanumu0@gmail.com";
	int i=(int)email.find('@');
	string uname=email.substr(0,i);
	cout<<"User Name is: "<<uname;
	return 0;
}
