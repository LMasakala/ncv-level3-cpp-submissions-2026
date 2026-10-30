#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

void getNumbers (int num[], int sz)
{
     for(int x = 0; x<sz; x++)
    {
        cout<<"Enter the number "<<x+1 <<":";

        cin>> num[x];
    }
}

void displayNumbers(int num[], int sz)
{
    for(int x = 0; x<sz; x++)
    {
       cout<<num[x]<<endl;
    }
}

int evenNumber(int num[], int sz)
{
    int counter =0;
    cout<<"The even numbers are: "<<endl;
    for(int x = 0; x < sz; x++)
    {

      if(num[x] % 2==0)
      {

        cout<<num[x]<<" ";
        counter = counter +1;
      }

    }
     cout<<""<<endl;
    return counter;

}
void showOdd(int num[],int sz)
{
    cout<<""<<endl;
     cout<<"The odd numbers are: "<<endl;
    for(int x = 0; x<sz; x++)
    {
        if(num[x]%2 !=0)
        {
        cout<<num[x]<<" ";
        }
     }
     cout<<endl;
}

 void ascendingNumbers(int num[],int sz)
 {
    for(int x=0; x<sz; x++)
    {
        for( int y = 0; y<sz-1; y++)
        {
            if(num[y]>num[y+1])
            {
                int store = num[y];
                num[y] = num[y+1];
                num[y+1]= store;
            }
        }
    }
 }
 void showAscending(int num[],int sz)
{

    cout<<"The ascending numbers: "<<endl;
    for(int x = 0; x<sz; x++)
    {
        cout<<num[x]<<" ";

    }
     cout<<endl;
}

const int siz = 5;

int main()
{
    int num[siz];

    getNumbers(num, siz);

    //Display even numbers and say how many they are

    cout<<"The number of even numbers: "<<evenNumber(num,siz)<<endl;
    //displayNumbers(num,siz);
    showOdd(num,siz);
    cout<<""<<endl;

    ascendingNumbers(num,siz);
    showAscending(num,siz);

    return 0;

}

