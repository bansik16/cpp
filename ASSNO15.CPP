#include<iostream.h>
#include<conio.h>
class arithmetic
{
	int a,b;
	public:
		inline void add();
		inline void sub();
		inline void div();
		inline void mul();
		inline void get();
};
inline void arithmetic::get()
{
	cout<<"enter a,b:";
	cin>>a>>b;
}
inline void arithmetic::add()
{
	cout<<"addition:"<<a+b;
}
inline void arithmetic::sub()
{
	cout<<"subtraction:"<<a-b;
}
inline void arithmetic::div()
{
	cout<<"division:"<<a/b;
}
inline void arithmetic::mul()
{
	cout<<"multiplication:"<<a*b;
}
