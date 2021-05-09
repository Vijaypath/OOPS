#include<bits/stdc++.h>
using namespace std;
//////Blueprint//////////
class car  // Morden data type
{
	public:
		//data member's 
		//char name[100];
		char *name;

		int price;
		int avg;
		int model;
		// data function's
		car()
		{
			name=NULL;
			cout<<"default constructor"<<endl;
		}
		car(char *n,int p, int av, int m)
		{
			cout<<"parametrized constructor"<<" "<<endl;
			name = new char[strlen(n)+1];
			strcpy(name, n);
			price=p;
			avg=av;
			model=m;
		}
		car (car &x)
		{
			cout<<"inside copy constructot"<<endl;
			name = new char[strlen(x.name)+1];
			strcpy(name, x.name);
			price=x.price;
			avg=x.avg;
			model=x.model;
		}
		void print()
		{
			cout<<"Name  :"<<name<<endl;
			cout<<"Price :"<<price<<endl;
			cout<<"Avg   :"<<avg<<endl;
			cout<<"Model :"<<model<<endl;
		}
};
int main()
{
	car a("alto",136,21, 2023); //this is how we create an object
	//a.name="BMW"; will not work
	/*strcpy(a.name,"BMW");//this is how we can access the charater array
	a.price=100;
	a.avg=10;
	a.model=2020;*/
//	a.print();
	car b("ford",134,23, 2022);
    car c=a;
    a.print();
    b.print();
    c.print();
	/*cout<<a.name<<endl;
	cout<<a.price<<endl;
	cout<<a.avg<<endl;
	cout<<a.model<<endl;
	car b;
	strcpy(b.name,"AUDI");
	b.price=120;
	b.avg=12;
	b.model=2021;
	b.print();
	/*cout<<b.name<<endl;
	cout<<b.price<<endl;
	cout<<b.avg<<endl;
	cout<<b.model<<endl;*/
	//b.print();

	return 0;
}
