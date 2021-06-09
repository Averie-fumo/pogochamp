#include <iostream>
#include "Room.h"
using namespace std;

#ifndef STANDARD_H
#define STANDARD_H
class Standard : public Room
{
private:
    int price;
    int reserved;
    int empty;
    bool** occupied;
public:
    Standard()
    {
        price = 300;
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
    ~Standard()
    {
        for (int i = 0;i < 5;i++)
            delete[] occupied[i];
        delete occupied;
        occupied = nullptr;
    }
};
#endif
