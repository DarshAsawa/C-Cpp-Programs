#include<iostream>

using namespace std;
class distance{
	int feet;
	float inches;
	public:void convert(int);
   public:	void display();
	
};
void distance::convert(int len)
{
	feet=len/12;
	inches=len%12;
	
}

void distance::display()
{
	cout<<"the distance in feet and inches is: "<<feet<<"'"<<inches;
	
}
int main()
{
	class distance d1;
	int input;
	cout<<"enter the lenth in inches:"<<endl;
	cin>>input;
	d1.convert(input);
	cout<<"coverted values are:"<<endl;
	d1.display();
	
}

