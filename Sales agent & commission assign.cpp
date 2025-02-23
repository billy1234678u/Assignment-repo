#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i;
	string name;
	cout<<"Enter your Name:"<<endl;
	cin>> name;
	cout<<"Enter your sales volume:"<<endl;
	cin>> i;
	switch
	{
	case  i <= 5000:
		cout<<"The sales agent is:"<<name<<endl;
		cout<<"Your commission is 15%."<<endl;
		break;
	case 4000 >= i <= 4999:
		cout<<"The sales agent is:"<<name<<endl;
		cout<<"Your commission is 12%"<<endl;
		break;
	case 3000 >= i <= 3999:
		cout<<"The sales agent is:"<<name<<endl;
		cout<<"Your commission is 9%"<<endl;
		break;
	case 2000 >= i <= 2999:
		cout<<"The sales agent is:"<<name<<endl;
		cout<<"Your commission is 6%"<<endl;
		break;
	case i <= 2000:
		cout<<"The sales agent is:"<<name<<endl;
		cout<<"Your commission is 3%"<<endl;
		break;
	default
		cout<<"Invalid input"<<endl;
		break;
	}
	
	
	return 0;
}