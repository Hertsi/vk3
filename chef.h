#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;

class Chef
{
public:
    Chef();
    ~Chef();
    void makeSalad();
    void makeSoup();
    Chef(string);
protected:
    string name;

};

#endif // CHEF_H
