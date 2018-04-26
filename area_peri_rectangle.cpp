#include<iostream>
using namespace std;
class rectangle
{
	private:
		int len,br;
		public:
			void getdata()
			 {
			 	cout<<endl<<"enter the length and breadth"<<endl;
			 	cin>>len>> br;
			 	
			 }
			void setdata(int l,int b)
			 {
			 	len=l;
			 	br=b;
				
			 } 
			void displaydata()
			 {
			 	cout<<endl<<"lenth="<<len;
			 	cout<<endl<<"breadth="<<br;
			 	
			 }
			void area_peri()
			 {
			  int a,p;
			  a=len*br;
			  p=2*(len+br);
			  cout<<endl<<"area="<<a;
			  cout<<endl<<"perimeter="<<p<<endl;
			  	
			 } 
};
int main()
{
	rectangle r1,r2,r3;
	cout<<"RECTANGLE 1:"<<endl;
	r1.setdata(10,20);
	r1.displaydata();
	r1.area_peri();
	cout<<endl;
	
	cout<<"RECTANGLE 2:"<<endl;
	r2.setdata(20,30);
	r2.displaydata();
	r2.area_peri();
	cout<<endl;
	cout<<"RECTANGLE 3:"<<endl;
	
	r3.getdata();
	r3.displaydata();
	r3.area_peri();
	return 0;
}
