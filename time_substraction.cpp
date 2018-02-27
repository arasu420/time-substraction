#include <iostream>
using namespace std;
int  main()
{
	int time,t1,t2,hr,min,hr1,min1,hr2,min2;
	cout << "Enter the 1st time : ";
	cin >> hr1>>min1;
	cout << "Enter the 2st time : ";
	cin >> hr2>>min2;
	t1=(hr1*60)+min1;
	t2=(hr2*60)+min2;
	    time=abs(t1-t2);    
	hr = time/60;
	min = time%60;
	cout<<"time"<<hr<<" hours "<<min<<" minutes ";
	return 0;
}
