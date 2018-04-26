#include<iostream>
using namespace std;
class darsh	
{
	public:
	 int i=5;
};
class def : public/*protected*/ darsh
{
	double j=6;
	//public:
	
};
class efg : public def

int main()
{
	def t;
	cout<<t.i;
	return 0;
}
