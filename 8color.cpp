#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter numbers of colors: ";
    cin >> n;
    int second = 0;
    string first;
    string color[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter color: ";
        cin >> color[i];
    }
    for (int i = 0; i < n; i++)
    {
        second = second + 2;
    }

    for (int i = 0; i < n; i++)
    {
        first = color[i];
        if (color[i+1] != first && i+1 < n)
        {
            second = second + 1;
        }
        cout<<second<<endl;

    }

    cout << "seconds are " << second;
}