#include<iostream>
using namespace std;
class darsh
{
	
	public: int a,b;
	darsh()
	{
		a=10;b=20;
		cout<<"default constructor called\n";
		cout<<a<<"\t"<<b<<endl;
		
	}
	darsh(int i,int j)
	{
		a=i;
		b=j;	
		cout<<"parametrized constructor called\n";
    	cout<<a<<"\t"<<b<<endl;

	}
	darsh(darsh &l)
	{
		cout<<"\ncopy constructor called"<<endl;
		
	}
	~darsh()
	{
		cout<<"destructor called\n";
		
	}
};
int main()
{
darsh a,b;
{
	darsh a(19,15);
	{
		darsh b(a);
	}
	
}
return 0;
	
}




