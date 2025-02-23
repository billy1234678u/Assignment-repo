#include <iostream>
using namespace std;
int main()
{
	float height, weight, BMI;
	cout<<"Enter Height:"<<endl;
	cin>>height;
	cout<<"Enter Weight:"<<endl;
	cin>>weight;
	
	BMI=weight/(height,2);
	switch{
	case (BMI<=20):
		cout<<"Lower than normal weight."<<endl;
		break;
	case (BMI=21,22,23,24,25):
		cout<<"Normal Weight."<<endl;
		break;
	case (BMI=26 27 28 29 30):
		cout<<"Over Weight."<<endl;
		break;
	case (BMI=31 32 33 34 35 36 37 38 39 40):
		cout<<"Obese"<<endl;
		break;
	case (BMI=>40):
		cout<<"Extreme Obese."<<endl;
    default:
    	cout<<"Invalid Input."<<endl;
		break;}
	return 0;
}