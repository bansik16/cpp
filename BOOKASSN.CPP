#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int n;
class book
{
	int b_code;
	char title[10],author[10],edition[10],publisher[10];
	public:
		void getdata();
		void find(book *b);
		void display();
};
void book::getdata()
{
	cout<<"enter book code:";cin>>b_code;
	cout<<"enter book title:";cin>>title;
	cout<<"enter book author:";cin>>author;
	cout<<"enter book edition:";cin>>edition;
	cout<<"enter book publisher:";cin>>publisher;
}
void book::find(book *b)
{
	int flag=0;
	char t[20];
	cout<<"which book you want to search?";
	cin>>t;
	for(int i=0;i<n;i++)
	{
		if(strcmp(b[i].title,t)==0)
		{
			flag=1;
			break;
		}
		else
			flag=0;
	}
	if(flag==1)
		cout<<"book found";
	else
		cout<<"not found";
}
void book::display()
{
	cout<<b_code<<"\t"<<title<<"\t"<<author<<"\t"<<edition<<"\t"<<publisher;
}
void main()
{
	book b[10],temp;
	clrscr();
	cout<<"how many books do you want:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		b[i].getdata();
	}
	cout<<"b_code\ttitle\t\tauthor\t\tedition\t\tpublisher\n";
	for(i=0;i<n;i++)
	{
		b[i].display();
	}
	temp.find(b);
	getch();
}
