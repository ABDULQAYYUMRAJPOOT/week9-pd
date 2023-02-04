#include <iostream>
using namespace std;

main()
{
    int n, num;
    cout << "Enter how many numbers you want in an array: ";
    cin >> num;
    int array[num];
    cout << "Enter how many times you want to transform: ";
    cin >> n;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter number: ";
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < num; i++)
        {
            if (array[i] % 2 == 1)
            {
                array[i] = array[i] + 2;
            }
            else if (array[i] % 2 == 0)
            {
                array[i] = array[i] - 2;
            }
        }
    }
    for (int i = 0; i < num; i++)
    {
        cout << array[i] << ", ";
    }
}