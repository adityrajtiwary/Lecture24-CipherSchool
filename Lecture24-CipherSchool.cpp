#include<iostream>
using namespace std;

//void swap(int *x, int *y)
//{
//	int c;
//	c =  *x;
//	*x = *y;
//	*y = c;
//	
//	cout<<"The swapping is complete"<<endl;
//}

int main()
{
//	int a, b;
//	a = 3;
//	b = 4;
//	cout<<"Before swapping the values: "<<a<<"b:"<<b<<endl;
//	swap(&a,&b);
//	
//	cout<<"After swapping values a: "<<a<<"b:"<<b<<endl;
	int a[10];
	cout<<"Values for comparison:"<<endl;
	cout<<"The value of address a is: "<<a<<endl;
	cout<<"The value of address a[0]"<<&a[0]<<endl;
	cout<<"The value of address a[1]"<<&a[1]<<endl;
	return 0;
}
