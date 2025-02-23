#include <iostream>
using namespace std;
int main()
{
char grade;
cout<<"Enter Grade"<<endl;
cin>>grade;
switch(grade)
{
case 'A':
	cout<<"Excellent!"<<endl;
	break;
case 'B':
	cout<<"Good!"<<endl;
	break;
case 'C':
	cout<<"Not Bad, Pull up your socks NIGGA!!"<<endl;
	break;
case 'D':
	cout<<"You FAILED, Come to my Office ASAP!!"<<endl;
	break;
default:
	cout<<"Invalid Grade!"<<endl;
}	
	return 0;
}