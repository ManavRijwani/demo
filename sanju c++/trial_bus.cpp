#include<iostream>
using namespace std;

class bus{
	public:
		int bus_no;
		string bus_model;
		void get(int bus_no,string bus_model);
		void put(int bus_no,string bus_model);
};

void bus :: get(int a,string b="ert")
{
cout<<"enter bus number"<<endl;
cin>>bus_no;
//cout<<"enter bus_model";
//cin>>bus_model;
}
void bus::put(int a,string b="ert")
{

cout<<"your bus number is"<<bus_no;
cout<<"your bus model is"<<b;	
}
int main()
{
	int a;	
	string b;
	bus obj1;
	obj1.get(a);
	obj1.put(a);
	return 0;
}


