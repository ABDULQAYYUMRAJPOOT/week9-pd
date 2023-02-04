#include <iostream>
using namespace std;


main()
{
    string fruits[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};
    string item;
    int kg, index, totalbill;
    cout<<"Enter name of fruit: ";
    cin>> item;
    cout<<"Enter no of kilogrammes: ";
    cin>> kg;
    for(int i = 0; i < 4; i++)
    {
        if(fruits[i] == item)
        {
            index = price[i];
        }
        cout<<fruits[i]<<endl;
    }
    totalbill = index * kg;
    cout<<"total bill is: "<< totalbill;
}
