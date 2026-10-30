#include <iostream>
using namespace std;

int main()
{
    int numbers[5];
    int evenCount = 0;

    // Input 5 numbers
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Display all numbers in the array
    cout << "\nNumbers stored in the array: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }

    // Count even numbers
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            evenCount++;
        }
    }

    // Display the number of even numbers
    cout << "\nNumber of even numbers: " << evenCount << endl;

    return 0;
}
