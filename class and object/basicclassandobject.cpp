#include<iostream>
using namespace std;
class Display
{
	public:
	int num=10;
	void display()
	{
		cout<<"This is my first program";
	}
};

int main()
{
	Display d1;
	int ans;
	d1.display();
	ans=d1.num;
	cout<<"\nThe value of ans is "<<ans;
return 0;	
}
	
