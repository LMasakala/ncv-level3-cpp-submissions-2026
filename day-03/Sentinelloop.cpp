#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int num;
    int counter = 1;
    int sum =0;
    double aver ;

    cout<<"Enter a number "<<counter<<"(-1 to terminate)";
    cin >>num;

    while(num != -1)
    {

    counter =counter +1;
    sum =sum +num;
    cout<<"Enter a number "<<counter<<"(-1 to terminate)";
    cin>> num;

    }
    cout<<fixed<<setprecision(2);
    aver = sum/(counter-1);


    cout<<(counter-1)<<" numbers were entered"<<endl;
    cout<<"The final sum "<< sum<<endl;
    cout<<"The averageis  "<< aver;

    return 0;

}

