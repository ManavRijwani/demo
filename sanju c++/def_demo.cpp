#include<iostream>
using namespace std;
int sum(int a,int b);
int sum(int a,int b=7)
{
	a=25;
	cout<<a;
	cout<<b;
}
int main()
{
	int a,b;
	sum(a);
}

