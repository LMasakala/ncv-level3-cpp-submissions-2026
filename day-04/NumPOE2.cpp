#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
#include<iomanip>

using namespace std;

int calcSum (int num1, int num2);
int calcDiff (int num1, int num2);
int calcProd (int num1, int num2);
int calcQout (int num1, int num2);

int main ()
{
    int val1 = 0;
    int val2 = 0;

    srand(time(0));

    val1 = rand() % 50 + 1;
    val2 = rand() % 50 + 1;

    cout<<"The numbers are : "<< val1<<" "<<val2<<endl;

    char choice;
    cout<<"Make a choice +,-,*,/ "<<endl;
    cin>>choice;

    switch (choice)
    {
    case '+':
        cout<<"The sum is"<<calcSum(val1,val2)<<endl;
        break;
    case '*':
        cout<<"The product "<<calcProd(val1, val2)<<endl;
        break;
    case '-':
        cout<<"The difference is "<<calcDiff(val1, val2)<<endl;
        break;
    case '/':
        cout<<"The qoutient is "<<calcQout(val1, val2)<< endl;
        break;
    default: cout<<"Invalid code";

    return 0;
}
}
int calcSum(int num1, int num2)
 {
    return num1 + num2;
 }
int calcDiff(int num1, int num2)
 {
    return num1 - num2;
 }
int calcProd(int num1, int num2)
 {
    return num1 * num2;

}
int calcQout(int num1, int num2)
 {
    return num1/num2;
 }



