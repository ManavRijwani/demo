#include<iostream>
using namespace std;
int sum()
{
	int c;
	c=a+b;
	return c;
}
int main()
{

	int ans;
	cout<<"enter a and b";
	cin>>a>>b;
	 ans=sum();
	cout<<"the sum is:"<<ans;
	return 0;
}
