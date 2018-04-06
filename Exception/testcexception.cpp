#include <iostream>
#include "exception.h"
using namespace std;

void testException ()
{
    while (true)
    {
        string libelle;
        cout << "Entrez le libellé" << endl;
        cin >> libelle;
        unsigned code;
        cout << "Entrez le code d'erreur" << endl;
        cin >> code;
        nsUtil::Exception e1 (libelle,code);
        e1.display();
        cout << endl;
    }
}


int main ()
{
    testException();
    return 0;
}
