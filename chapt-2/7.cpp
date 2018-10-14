#include<iostream>
#include<windows.h>
using namespace std;
add(int &a,int &b)
{
	return a+b;
}
int main()
{
	int x,y,sum;
	cout<<"ÇëÊäÈëxºÍy£º";
	cin>>x>>y;
	sum=add(x,y);
	cout<<"x+y="<<sum<<endl;
	system("pause");
	return 0;
}


