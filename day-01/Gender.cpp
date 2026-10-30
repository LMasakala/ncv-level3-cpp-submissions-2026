#include<iostream>
using namespace std;

 int main()
 {
    char gendercode;
   string description;

    cout<<"Please enter gender code either M or F: ";
    cin>>gendercode;

switch (gendercode)
{
case 1:
    description = "F";
    break;
case 2:
    description = "M";
    break;
case 3:
 description = "Invalid code";
//default:
    //description = "Invalid code";
}

    cout<< description;
    return 0;
}
