#include <iostream>
#include "italianchef.h"
using namespace std;

int main()
{
    Chef chef("Gordon Ramsay");
    ItalianChef italianChef("Anthony Bourdain", 250, 100);

    chef.makeSalad();
    chef.makeSoup();
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();


    return 0;
}
