#include<iostream>
using namespace std ;
class hydrogen;
 class sulphur;
class oxygen
{ 
   public :
   	float molvalue_oxy;
   friend int compound(oxygen ,hydrogen ,sulphur);

};

class hydrogen
{
  public :float molvalue_hyd;
   friend int compound(oxygen ,hydrogen ,sulphur);

};

class sulphur
{ 
 public :float molvalue_sul;
  friend int compound(oxygen ,hydrogen ,sulphur);
};

int compound(oxygen ox,hydrogen hy,sulphur su)
{
	int o=ox.molvalue_oxy/16;
	int h=hy.molvalue_hyd/1;
int s=su.molvalue_sul/32;
cout<<"chemical compound is: "<<"H"<<h<<"S"<<s<<"O"<<o<<endl;
return 0;
}

int main ()
{ oxygen oxy;
sulphur sul;
hydrogen hyd;

  cout<<"enter molec. values for oxygen,sulphur,hydrogen"<<endl;
  cin>>oxy.molvalue_oxy>>sul.molvalue_sul>>hyd.molvalue_hyd;
  
  compound(oxy,hyd,sul);
return 0;
}
