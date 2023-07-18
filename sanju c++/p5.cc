#include<iostream>
using namespace std;
class pattern{
	public:
	int i,j;
	void demo()
	{
		for(i=0;i<=5;i++)
		{
			for(j=0;j<=5;j++)
			{
				cout<<j;
			}
			cout<<"\n";
		}
	}
};
int main()
{
	pattern obj;
	obj.demo();
}
