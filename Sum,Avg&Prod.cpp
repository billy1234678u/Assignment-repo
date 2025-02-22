#include <iostream>
using namespace std;
int main()
{
    float num1, num2, sum, avg, prod;

	cout<<"Enter the first number:"<<endl;
	cin>>num1;
	cout<<"Enter the second number:"<<endl;
	cin>>num2;
	sum=num1 + num2;
	avg=sum/2;
	prod=num1 * num2;
	cout<<"The total is = "<<sum<<endl;
	cout<<"The average is = "<<avg<<endl;
	cout<<"The product is = "<<prod<<endl;
	return 0;
}