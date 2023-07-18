#include<iostream>
using namespace std;
class demo_class{
	public:
	string a;
	int b;//this is integer data member
	void demo()
	{
		cout<<"\nthis is first member function";
	}
	void demo2()
	{
		cout<<"\nthis is second member function";
			cout<<a<<b;
	}
	
		
};
int main(){
demo_class obj;
obj.a="manav";
obj.b=10;
obj.demo();
obj.demo2();
return 0;
}
