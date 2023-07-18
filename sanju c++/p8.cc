#include<iostream>
using namespace std;
class car{
	private:
		int car_no;
		string car_model;
	public:
	void getdata();
	void printdata();		
};
class bus{
	public:
		int bus_no;
		string bus_model;
		void get();
		void put();
};
void car :: getdata(int car_no,string car_model)//outside function declaration and :: is our scope resolution
{
cout<<"enter car number"<<endl;
cin>>car_no;
cout<<"enter car_model";
cin>>car_model;
}
void car :: printdata(int car_no,string car_model)
{

cout<<"your car number is"<<car_no;
cout<<"your car model is"<<car_model;
}
void bus :: get(int car_no,string car_model)
{
cout<<"enter bus number"<<endl;
cin>>bus_no;
cout<<"enter bus_model";
cin>>bus_model;
}
void bus::put(int car_no,string car_model)
{

cout<<"your bus number is"<<bus_no;
cout<<"your bus model is"<<bus_model;	
}
int main()
{
	car obj;
	obj.getdata();
	obj.printdata();
	bus obj1;
	obj1.get();
	obj1.put();
	return 0;
}


