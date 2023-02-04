#include <iostream>
using namespace std;

main()
{
    int n;
    string result;
    cout << "how much number you want to enter: ";
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> array[i];
    }
    int count = 0, idx = 0;

    for (int i = 0; array[i] % 10 != 0 || array[i] / 10 != 0; i++)
    {
        int num = array[i] % 10;
        if (num == 7)
        {
            idx = array[i];
            result = " contains number 7. ";
            count++;
            break;
        }
        num = array[i] / 10;
        if (num % 10 == 7)
        {
            idx = array[i];
            result = " contains number 7.";
            count++;
            break;
        }
        
    }
    
    if (count > 0 )
    {
        cout <<idx << " " << result << endl;
    }
    else if (count == 0)
    {
        cout << "No number contains 7";
    }
}
