#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    string message;
    char gender;

    cout<<"Enter your gender: ";
    cin>>gender;

    switch (gender)
    {
        case 'F':
        case 'f':
        message = "You are female";
        break;
        case 'M':
        case 'm':
        message = "You are male";
        break;
        default:
        message = "Invalid code";
        break;

    }
        cout<<""<<endl;
        cout<< message;

        return 0;

}
