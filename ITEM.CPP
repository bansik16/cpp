#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<string.h>
class item
{
	int i_id,i_stock;
	char i_name[10];
	public:
		void purchase();
		void sales();
		void stock();
		item()
		{
			i_id=1;
			strcpy(i_name,"bansi");
			i_stock=1000;
		}
};
void item::purchase()
{
	float value;
	cout<<"purchase:";
	cin>>value;
	i_stock=i_stock+value;
}
void item::sales()
{
	float value;
	cout<<"sale:";
	cin>>value;
	if(value>i_stock)
	{
		cout<<"out off stock";
	}
	else
	{
		i_stock=i_stock-value;
	}
}
void item::stock()
{
	cout<<"item id:"<<i_id<<endl;
	cout<<"name:"<<i_name<<endl;
	cout<<"item stock:"<<i_stock<<endl;
}
void main()
{
	clrscr();
	item i;
	int choice;
	do
	{
		cout<<"1->purchase\n2->sales\n3->stock\n0->exit\n\n";
		cout<<"enter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				i.purchase();
				getch();
				break;
			case 2:
				i.sales();
				getch();
				break;
			case 3:
				i.stock();
				getch();
				break;
			case 0:
				exit(0);
				getch();
		}
	}while(1);
	getch();
}
