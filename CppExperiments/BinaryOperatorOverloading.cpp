#include<iostream>
using namespace std;

class time
{
private:
int hours,minutes;
public:
time( )
{
hours=0;
minutes=0;
}
time(int x,int y)
{
hours=x;
minutes=y;
}
void display( )
{
cout<<endl<<hours<<" hours and "<<minutes<<" minutes.";
}

friend time operator + (time, time);
};

time operator + (time y, time z)
{
    int h = y.hours + z.hours;
    int m = y.minutes + z.minutes;
    while (m>=60)
    {
        m = m-60;
        h = h+1;
    }
    return time(h,m);
}

int main( )
{

time t1(2,40);
time t2(3,30);
time t3;
t3 = t1+t2;
t3.display( );
return 0;
}
