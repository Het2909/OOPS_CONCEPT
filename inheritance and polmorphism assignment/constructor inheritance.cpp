#include<iostream> 
using namespace std; 

class A 
{ 
	public: 
		A() 
		{ 
			cout << "Class A constructor \n"; 
		} 
}; 

class B: public A 
{ 
	public: 
		B() 
		{ 
			cout << "Class B constructor \n"; 
		} 
}; 
 
class C: public B 
{ 
	public: 
		C() 
		{ 
			cout << "Class C constructor \n"; 
			
		} 
}; 

// Driver code 
int main() 
{ 
	C obj; 
	return 0; 
}

