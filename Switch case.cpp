#include <iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter Marks?"<<endl;
	cin>>marks;
	switch (marks);
	{
		case 70..79:
			cout<<"A"<<endl;
			cout<<"Excellent!"<<endl;
			break;
		case 60..69:
			cout<<"B"<<endl;
			cout<<"Good"<<endl;
			break;
		case 50..59:
			cout<<"C"<<endl;
			cout<<"Fair"<<endl;
			break;
		case 40..49:
			cout<<"D"<<endl;
			cout<<"Pass"<<endl;
			break;
		case 30..39:
			cout<<"F"<<endl;
			cout<<"Fail"<<endl;
		default:
			cout<<"No such input!"<<endl;
	}
	return 0;
}