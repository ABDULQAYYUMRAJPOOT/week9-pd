#include <iostream>
using namespace std;

main()
{
    string array[4];
    string ans;
    string test;
    for(int i = 0; i < 4; i++)
    {
        cout<<"Enter string: ";
        cin>> array[i];
    }
    for(int i = 0; i < 4; i++)
    {
        test = array[0];
        if(array[i] == test)
        {
            ans = "True";
        }
        else if(array[i] != test)
        {
            ans = "False";
        }
    }
    cout<<ans;
    
}