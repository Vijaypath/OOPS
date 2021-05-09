#include<bits/stdc++.h>
using namespace std;
class shape
{
	public:
	virtual	void  draw()
		{
			cout<<"Drawing"<<" "<<endl;
		}
};
class rectaingle:public shape{
	public:
	void draw()
	{
		cout<<"drawing rectaingle"<<endl;
	}
};
class circle:public shape{
	public:
		void draw()
		{
			cout<<"drawing cirle"<<endl;
		}
};
int main()
{
	shape* s;
	shape sh;
	rectaingle rec;
	circle c;
	s=&sh;
	s->draw();
	s=&rec;
	s->draw();
	s=&c;
	s->draw();
}
