#include <iostream>
using namespace std;

main()
{
    string movies[5] = {"dabbang", "anarkali", "totaldhamal", "guardians", "ironman"};
    string item;
    cout<<"Enter movie name dabbang, anarkali, totaldhamal, guardians, ironman: ";
    cin>> item;
    int index, totalbill;
    float price = 500;
    for(int i = 0; i<5; i++)
    {
        if(movies[i] == item)
        {
            i++;
            index = i;
        }
    }
    if(index % 2 == 1)
    {
        price = price - (price * 5 /100);
    }
    else
    {
        price = price - (price * 10 / 100);
    }
    cout<<"Total bill is: "<< price;

}