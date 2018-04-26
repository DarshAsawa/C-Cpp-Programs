#include<iostream>
using namespace std;
class stack{
	int arr[50],top,max,x;
	public:
		stack()
		{
			top=-1;
			max=25;
			
		}
		int isfull()
		{
			return(top==max);
			
		}
		int isempty()
		{
			return(top<0);
			
		}
		void push()
		{
			if (isfull())
			cout<<"stack overflow";
			else{
				cout<<"enter the number to push: ";
				cin>>x;
				top++;
				arr[top]=x;
				
			}
			
		}
		
		void pop()
		{
			if (isempty())
			cout<<"stack is empty"<<endl;
			else
			{
				cout<<"the number popped is:  "<<arr[top]<<endl;
				top--;
				
			}
		}
		void display()
		{
			cout<<"the stack is\n";
			if(top>-1)
			for(int i=top;i>=0;i--)
			cout<<arr[i]<<endl;
			else 
			cout<<"empty \n";
			
			
		}
	~stack()
	{
		cout<"destructor called";
	}
};
int main()
{
	stack s;
	int k,l;
	char c;
	do{
		cout<<"enter the number of elements to push:"<<endl;
		cin >>k;
		for(int i=0;i<k;i++)
		s.push();
		s.display();
		cout<<"enter the number of elements to pop:"<<endl;
		cin>>l;
		for(int i=0;i<l;i++)
		s.pop();
		s.display();
		cout<<"do you want to continue?"<<endl;
		cin>>c;
	}
	while(c=='y'||c=='Y');
	return 0;
}
