#include <iostream>
using namespace std;
int main()
{
	float height, weight, BMI;
	cout<<"Enter height:"<<endl;
	cin>>height;
	cout<<"Enter weight:"<<endl;
	cin>>weight;
	
	BMI=weight/(height,2);
	cout<<"Your BMI is ="<<BMI<<endl;
	return 0;
}