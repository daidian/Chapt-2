#include<iostream>
#include<windows.h>
using namespace std;
#define pi 3.1415926
double area(int &a)
{
	return pi*a*a;
}
double circul(int &b)
{
	return pi*b*2;
}

int main()
{
	int r;
	double s,c;
	cout<<"����Բ�İ뾶��"<<endl;
	cin>>r;
	s=area(r);
	c=circul(r);
	cout<<"Բ�������"<<s<<endl<<"Բ���ܳ���"<<c<<endl;
	system("pause");
	return 0;
}
