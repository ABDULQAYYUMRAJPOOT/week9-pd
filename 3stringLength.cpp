#include <iostream>
using namespace std;

main()
{
    string input;
    cout<<"Enter the word: ";
    cin>> input;
    int j= 0;
    for(int i = 0; input[i] != '\0'; i++)
    {
        j++;
    }

    if(j % 2 == 1)
    {
        cout<<"False";
    }
    else
    {
        cout<<"True";
    }
}