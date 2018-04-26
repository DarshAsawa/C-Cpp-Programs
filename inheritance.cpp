#include<iostream>
using namespace std;
class test
{
	protected:
	 int i=5;
};
class def : public/*protected*/ test
{
int j=6;
	//public:
	
};
class efg : public def

int main()
{
	def t;
	cout<<t.i;
	return 0;
}
