#include<iostream>
using namespace std;
class car{
	private:
		int car_no;
		string car_model;
	public:
	void getdata(int car_no,string car_model);
	void printdata(int car_no,string car_model);		
};
class bus{
	public:
		int bus_no;
		string bus_model;
		void get(int bus_no,string bus_model);
		void put(int bus_no,string bus_model);
};
void car :: getdata(int a,string b)//outside function declaration and :: is our scope resolution
{
cout<<"enter car number"<<endl;
cin>>car_no;
cout<<"enter car_model";
cin>>car_model;
}
void car :: printdata(int a,string b)
{

cout<<"your car number is"<<car_no;
cout<<"your car model is"<<car_model;
}
void bus :: get(int a,string b)
{
cout<<"enter bus number"<<endl;
cin>>bus_no;
cout<<"enter bus_model";
cin>>bus_model;
}
void bus::put(int a,string b)
{

cout<<"your bus number is"<<bus_no;
cout<<"your bus model is"<<bus_model;	
}
int main()
{
	int a;
	string b;
	car obj;
	obj.getdata(a,b);
	obj.printdata(a,b);
	bus obj1;
	obj1.get(a,b);
	obj1.put(a,b);
	return 0;
}


