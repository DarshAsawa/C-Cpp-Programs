#include<iostream>
using namespace std;
class queue{
	int a[10],i;
	int front=0,rear=0;
public:	void ins();
	void show()
	{
		int i,temp=front;
		if(front==rear)
		cout<<" the queue is empty ";
		else
     	{
		
		  cout<<"\nthe elements is queue is :\t";
		  for(i=temp;i<rear;i++)
		   {
			cout<<a[i]<<" " ;
			
	    	}
	    }
    }
     void del()
     {
     	if (front>=rear)
     	{cout<<" queue is empty "<<endl;
     	
		 }
		 else 
		 {
		 	cout<<"\ndeleted element:\t"<<a[front]<<endl;
		 	for(i=0;i<rear-1;i++)
		 	{
		 		a[i]=a[i+1];
		 		
			 }
			 rear--;
		 }
		 
		 
		 
		 
		 
		 
	 }

}q1;

void queue::ins()
{
	if(rear -1>10)
	{
		cout<<"queueoverflow"<<endl;
		
	}
	else 
	{
		int element;
		cout<<"\nenter the elements to insert in the queue:\t"<<endl;
		cin>>element;
		cout<<"\ninserted element is :\t"<<element<<endl;
		a[rear]=element;
		rear++;
	}
	
}
int main()
{
	int ch;
	while(1)
	{
		cout<<"\n 1.insert 2.delete\n Enter your choice\t";
		cin>>ch;
		switch(ch)
		{
			case 1:q1.ins();
			
			q1.show();
			break;
			case 2:q1.del();
			q1.show();
			break;
			default:
				cout<<"incorrect input \n";
				break;
		}
	}
}



