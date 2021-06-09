#include <iostream>
#include "Room.h"
using namespace std;
#ifndef JUNIOR_SUITE 
#define JUNIOR_SUITE
class Junior_suite : public Room
{
private:
    int price;
    int reserved;
    int empty;
    bool** occupied;
public:
    Junior_suite()
    {
        price = 2000;
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
    ~Junior_suite()
    {
        for (int i = 0;i < 5;i++)
            delete[] occupied[i];
        delete occupied;
        occupied = nullptr;
    }
};
#endif
