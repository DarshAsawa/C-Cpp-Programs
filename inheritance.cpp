#include<iostream>
using namespace std;
<<<<<<< HEAD
class darsh	
{
	protected:
	 int i=5;
};
class def : public/*protected*/ darsh
{
	double j=6;
=======
class test
{
	protected:
	 int i=5;
};
class def : public/*protected*/ test
{
int j=6;
>>>>>>> test
	//public:
	
};
class efg : public def

int main()
{
	def t;
	cout<<t.i;
	return 0;
}
