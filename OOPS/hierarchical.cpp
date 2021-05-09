#include<bits/stdc++.h>
using namespace std;
class shape
{
	public:
		int a;
		int b;
		void get_data(int n, int m)
		{
			a=n;
			b=m;
		}
};
class rectangle: public shape
{
	public:
	int rect_area()
	{
		int ans=a*b;
		return ans;
	}
};
class traingle: public shape
{
	public:
		int traingle_area()
		{
			float ans=0.5*a*b;
			return ans;
		}
};
int main()
{
	rectangle r;
	traingle t;
	int l,b,bs,h;
	cout<<"enter the length and base"<<" "<<endl;
	cin>>l>>b;
	r.get_data(l,b);
	int m=r.rect_area();
	cout<<"area of the rect"<<" "<<m<<endl;
	cout<<"enter the base and height"<<" "<<endl;
	cin>>bs>>h;
	t.get_data(bs,h);
	float n=t.traingle_area();
	cout<<"area of raingle is "<<" "<<n;
	return 0;
}
