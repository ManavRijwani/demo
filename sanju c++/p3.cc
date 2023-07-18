#include<iostream>
using namespace std;
int prime(int n)
{
	int i,count;
	 for(i=2;i<=n;i++)
	 {
	 	if(n%2==0)
	 	{
	 		count+=1;
		 }
	 }
	 if(count!=0)
	 {
	 	cout<<"prime no.";
	 }
	 else
	 {
	 	cout<<"not prime no.";
	 }
}
int main()
{
	int num;
	cout<<"enter the number:";
	cin>>num;
	prime(num);
}
