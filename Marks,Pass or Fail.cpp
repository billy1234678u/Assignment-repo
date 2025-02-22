#include <iostream>
using namespace std;
int main()
{
	string name;
	float marks1, marks2, marks3, marks4, marks5, sum, avg;
	cout<<"Enter student's name:"<<endl;
	getline(cin,name);
	cout<<"Enter Maths marks:"<<endl;
	cin>>marks1;
	cout<<"Enter English marks:"<<endl;
	cin>>marks2;
	cout<<"Enter Kiswahili marks:"<<endl;
	cin>>marks3;
	cout<<"Enter Physics marks:"<<endl;
	cin>>marks4;
	cout<<"Enter Chemistry marks:"<<endl;
	cin>>marks5;
	sum=marks1+marks2+marks3+marks4+marks5;
	avg=sum/5;
	if (avg>40)
	{
		cout<<"The student is ="<<name<<endl;
		cout<<"The average score is ="<<avg<<endl;
		cout<<"PASS"<<endl;
	}
	else
	{
		cout<<"The student is ="<<name<<endl;
		cout<<"The average score is ="<<avg<<endl;
		cout<<"FAIL!!"<<endl;
	}
	return 0;
}