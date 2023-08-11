#include<iostream>
#include<string.h>
using namespace std;
class distance{
	public:
		int feet;
		int inch;
};
int main()
{
    Distance d,d1,t;
	cout<<"enter 1 distance :"<<endl;
	cout<<"1.enter feet =";
	cin>>"2.enter inch =";
	cin>>d.inch;
	
	cout<<"enter 2 distance : "<<endl;
	cout<<" 1.enter feet =";
	cin>>d1.feet;
	cout<<" 2.enter inch =";
	cin>>d1.inch;
	
	t.feet = d.feet+d1.feet;
	t.inch = d.inch+d1.inch;
	if(t.inch>12)
	{
		
		  ++t.feet;
		  t.inch=12;
		  
	}
	cout<<"sum of distance ="<<t.feet;
	cout<<endl;
	return0;
}
