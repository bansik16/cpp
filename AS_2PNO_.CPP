// C++ Program to concatenate two string
//assignment no-2
//program no-4

#include<iostream.h>
#include<string.h>
#include<conio.h>
class AddString
{

	public:
		char s1[20],s2[20];
		AddString(char str1[],char str2[])
		{
			strcpy(this->s1,str1);
			strcpy(this->s2,str2);
		}
		void operator+()
		{
			cout<<"\nConcatenation: "<<strcat(s1,s2);
		}
};

void main()
{
	clrscr();
	char str1[] = "RAJAI";
	char str2[] = "HEMALI";
	AddString a1(str1,str2);
	+a1;
	getch();
}