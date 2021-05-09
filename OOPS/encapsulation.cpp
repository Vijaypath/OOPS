#include<bits/stdc++.h>
using namespace std;
class rectaingle{
	public:
		int l,b;
     rectaingle(int len, int brth):l(len),b(brth){}
     
     int getarea()
     {
     	return l*b;
	 }

};
int main()
{
	rectaingle rec(8,6);
	cout<<rec.getarea();
}

