#include<iostream>
using namespace std;
class Display
{
	private:
		int num;
	public:
	void setter(int n1)
	{
		num=n1;
	}
	int getter()
	{
		return num;
	}
};


int main()
{
	Display d1;
	int ans,i;
	cout<<"Enter a value: ";
	cin>>i;
	d1.setter(i);
	ans=d1.getter();
	cout<<"\nThe value of num is "<<ans;
return 0;	
}
	
