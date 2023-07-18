#include<iostream>
using namespace std;
int a,b;
int sum(int a,int b)
{
	
	return a+b;
}
int main()
{
	int ans;
	cout<<"enter a and b";
	cin>>a>>b;
	 ans=sum(a,b);
	cout<<"the sum is:"<<ans;
	return 0;
}
