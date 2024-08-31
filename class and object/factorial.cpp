#include<iostream>
using namespace std;
class Factorial
{
	private:
		int num;
		int fact;
	public:
	void setter(int n1)
	{
		num=n1;
			}
	int getter()
	{
		int fact=1,i;
		for(i=1;i<=num;i++)
		{
			fact=i*fact;
		}
			return fact;
	}
};


int main()
{
	Factorial F1;
	int ans,i;
	cout<<"Enter a value: ";
	cin>>i;
	F1.setter(i);
	ans=F1.getter();
	cout<<"\nFactorial of the number is "<<ans;
return 0;	
}
