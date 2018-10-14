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
	cout<<"输入圆的半径："<<endl;
	cin>>r;
	s=area(r);
	c=circul(r);
	cout<<"圆的面积是"<<s<<endl<<"圆的周长是"<<c<<endl;
	system("pause");
	return 0;
}
