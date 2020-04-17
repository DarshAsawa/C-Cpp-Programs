#include<iostream>

using namespace std;
class distance{
	int feet;
	float inches;
  public: 	void display();
	void convert(int);
	distance(); // constructor added;
	~distance();//distructor added;
	
	
};
distance::distance()
{
	cout<<"constructor called"<<endl;
	
}

distance::~distance()
{
	cout<<"\ndistructor called"<<endl;
	
}


void distance::convert(int len)
{
	feet=len/12;
	inches=len%12;
	
}

void distance::display()
{
	cout<<"the distance in feet and inches is: "<<feet<<"'"<<inches<<endl;
	
}
int main()
{
	class distance d;
	int input;
	cout<<"enter the lenth in inches:"<<endl;
	cin>>input;
	d.convert(input);
	cout<<"coverted values are:"<<endl;
	d.display();
	
}

