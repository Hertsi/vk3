#include "italianchef.h"

ItalianChef::ItalianChef(string chefName,int vedenmaara,int jauhojenmaara) : Chef(chefName)
{
    vesi = vedenmaara;
    jauhot = jauhojenmaara;
    cout << "Chef " << name << " created." << endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
     cout<<"Chef " << name << " makes pasta with special recipe " << endl;
     cout<<"Chef " << name << " uses jauhot =  " << jauhot << endl;
     cout<<"Chef " << name << " uses vesi =  " << vesi << endl;
}
