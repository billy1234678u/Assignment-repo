#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string Name;
    int Vol;

    cout << "Enter the sales agent's name: "<<endl;;
    getline(cin,Name);
    cout << "Enter the sales volume: "<<endl;
    cin >> Vol;

    double commissionRate;
    if (Vol >= 5000) 
	{
        commissionRate = 0.15;
    }
	 else if (Vol >= 4000) 
	{
        commissionRate = 0.12;
    }
	 else if (Vol >= 3000) 
	{
        commissionRate = 0.09;
    }
	 else if (Vol >= 2000) 
	{
        commissionRate = 0.06;
    }
	 else 
	{
        commissionRate = 0.03;
    }
    double commission = Vol * commissionRate;

    cout << "Agent Name: " << Name <<endl;
    cout << "Sales Volume: " << Vol <<endl;
    cout << "Commission: " << commission <<endl;

    return 0;
}