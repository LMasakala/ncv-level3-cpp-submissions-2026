#include <iostream>
using namespace std;

void getNumbers(double &num1 , double &num2);
void sum(double num1 , double num2);
void difference (double num1 , double num2);
void product(double num1, double num2);
void quotient(double num1, double num2);

int main()
{
    double num1, num2;

     getNumbers(num1, num2);

     sum(num1, num2);
     difference(num1, num2);
     product(num1, num2);
     quotient(num1, num2);
     return 0;
}
    void getNumbers(double &num1, double &num2)
    {
    cout<<"Enter the first number: ";
    cin>> num1;
    cout <<"Enter the second number: ";
    cin>> num2;
    }
    void sum(double num1, double num2)
    {
    cout << "Sum = "<< num1 + num2<< endl;

    }
    void difference(double num1, double num2)
    {
    cout << "Difference = "<< num1 - num2 <<endl;
    }
    void product(double num1, double num2)
    {
    cout <<"Product = "<< num1 * num2<< endl;
    }
    void quotient(double num1, double num2)
    {

        if (num2 != 0)
        {
            cout << "Quotient = " << num1 / num2 << endl;
        }
        else
        {
        cout << "Cannot divide by zero." << endl;
        }
    }

