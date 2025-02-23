#include <iostream>
#include <string>
using namespace std;
int main()
{
    double height, weight, bmi;

    cout << "Enter the person's height (in meters): "<<endl;
    cin >> height;
    cout << "Enter the person's weight (in kilograms): "<<endl;
    cin >> weight;

    bmi = weight / (height * height);
    string message;
    if (bmi < 20)
	{
        message = "Lower than normal weight";
    }
	 else if (20 <= bmi && bmi <= 25)
	{
        message = "Normal Weight";
    }
	 else if (26 <= bmi && bmi <= 30)
	{
        message = "Overweight";
    }
	 else if (31 <= bmi && bmi <= 40) 
    {
        message = "Obese";
    }
	 else
	{
        message = "Extreme obese";
    }
    cout << "BMI: " << bmi <<endl;
    cout << "Message: " << message <<endl;

    return 0;
}