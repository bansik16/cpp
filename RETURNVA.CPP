#include<iostream.h>
#include<conio.h>
class student
{
	int roll;
	int cpp,os,sad,dfs,total;
	char name[20],grade;
	float per;

	public:
		int get_total(float a,float b,float c,float d)
		{
			return(a+b+c+d);
		}
		float get_per(int t)
		{
			return(t/4.0);
		}
		char get_grade(float p)
		{
			if(per>=70&&per<=99)
				cout<<" A";
			else if(per>=60&&per<70)
				cout<<" B";
			else if(per>=50&&per<60)
				cout<<" C";
			else if(per>=40&&per<50)
				cout<<" D";
			else if(per>=33&&per<40)
				cout<<" E";
			else if(per<33)
			{
				cout<<" F";
			}
		}

		void get_data()
		{
			cout<<"enter roll no:";cin>>roll;
			cout<<"enter name:";cin>>name;
			cout<<"enter mark of cpp:";cin>>cpp;
			cout<<"enter mark of os:";cin>>os;
			cout<<"enter mark of sad:";cin>>sad;
			cout<<"enter mark of dfs:";cin>>dfs;

			total=get_total(cpp,os,sad,dfs);
			per=get_per(total);
			grade=get_grade(per);
		}
		void display()
		{
			cout<<"enter roll no:"<<roll<<endl;
			cout<<"enter name:"<<name<<endl;
			cout<<"enter mark of cpp:"<<cpp<<endl;
			cout<<"enter mark of os:"<<os<<endl;
			cout<<"enter mark of sad:"<<sad<<endl;
			cout<<"enter mark of dfs:"<<dfs<<endl;
			cout<<"enter total:"<<total<<endl;
			cout<<"enter per:"<<per<<endl;
			cout<<"enter grade:"<<grade<<endl;
		}
};

void main()
{
	clrscr();
	student s;
	s.get_data();
	s.display();
	getch();
}