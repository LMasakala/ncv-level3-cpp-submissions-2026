#include<iostream>
using namespace std;

int main(){
    int width , lenght;
    cout <<"Please enter width\n";
    cout <<"Please enter length\n";
    cin >> width;
    cin >> lenght;
    int area = width * lenght;
    int perimeter = 2*width + 2*lenght;
    cout<< "The area is : " << area << "The perimeter is: " << perimeter << endl;

    return 0;
}
