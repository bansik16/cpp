#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	public:
		int roll;
		char name[20],city[20];
		float per;
		student()
		{
			roll=1;
			strcpy(name,"hemali");
			strcpy(city,"mahuva");
			per=78.00;
		}
	       /*	student (student &s)
		{
			roll=s.roll;
			strcpy(name,s.name);
			strcpy(city,s.city);
			per=s.per;
		}*/
		void put()
		{
			cout<<"roll no:"<<roll<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"city:"<<city<<endl;
			cout<<"per:"<<per<<endl;
		}
};

void main()
{
	student s;
	student s1=s;
	clrscr();
	s.put();
	s1.put();
	getch();

}