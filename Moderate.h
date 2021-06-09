#include <iostream>
#include "Room.h"
using namespace std;

#ifndef MODERATE_H
#define MODERATE_H
class Moderate : public Room
{
private:
    int price;
    int reserved;
    int empty;
    bool** occupied;
public:
    Moderate()
    {
        price = 500;
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
    ~Moderate()
    {
        for (int i = 0;i < 5;i++)
            delete[] occupied[i];
        delete occupied;
        occupied = nullptr;
    }
};
#endif
