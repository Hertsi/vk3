#include "chef.h"

Chef::Chef(string chefName)
{
    name = chefName;
    cout << "Chef " << name << " created." << endl;
}

Chef::~Chef()
{
    cout << "Chef " << name << " destroyed." << endl;
}

void Chef::makeSalad()
{
    cout<< "Chef " << name << " is making salad." << endl;
}

void Chef::makeSoup()
{
    cout<< "Chef " << name << " is making soup." << endl;
}


