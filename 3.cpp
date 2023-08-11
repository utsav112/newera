#include<iostream>
#include<string.h>
using namespace std;
class time{
	public:
		char hh.mm.ss:
};
int main()
{
	time t;
	cout<<"enter time in second =";
	cin>>t.ss;
	
	t.hh=t.ss/3600;
	t.mm=(t.ss%3600)/60;
	t.ss=(t.ss%3600)%60;
	
	cout<<"hh : mm : ss ="<<t.hh<<" : "<<endl;
	return 0;
}
