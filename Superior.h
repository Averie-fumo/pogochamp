#include <iostream>
#include "Room.h"
using namespace std;

#ifndef SUPERIOR_H
#define SUPERIOR_H
class Superior : public Room
{
private:
    int price;
    int reserved;
    int empty;
    bool** occupied;
public:
    Superior()
    {
        price = 1000;
        occupied = new bool* [5];
        for (int i = 0;i < 5;i++)
            occupied[i] = new bool[10];
    }
    void reserveroom()
    {

    }
    void checkout()
    {

    }
    int getreserved()
    {
        // check 2d array 
        return reserved;
    }
    int getempty()
    {
        //check 2d 
        return empty;
    }
    ~Superior()
    {
        for (int i = 0;i < 5;i++)
            delete[] occupied[i];
        delete occupied;
        occupied = nullptr;
    }
};
#endif
