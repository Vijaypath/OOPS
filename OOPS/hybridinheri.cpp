#include<bits/stdc++.h>
using namespace std;
class A{
	protected:
		int a;
		public:
			void get_a()
			{
			   cin>>a;
			}
};
class B: public A
{
	protected:
		int b;
		public:
			void get_b()
			{
				cin>>b;
			}
};
class C{
	protected:
		int c;
		public:
			void get_c()
			{
			   cin>>c;
			}
};
class D :public B,public C
{
	protected:
	int d;
	public:
		void mul()
		{
			get_a();
	        get_b();
	        get_c();
	        cout<<"multipilactions of"<<" "<<a*b*c<<endl;
		}
};
int main()
{
  D d;
  d.mul();
	return 0;
}
