#include <iostream>
#include <string>
#include "exception.h"

using namespace std;
using namespace nsUtil;



nsUtil::Exception::exception(string _myLibelle, unsigned _myCodErr)
{
    myLibelle=_myLibelle;
    myCodErr=_myCodErr;
}

nsUtil::Exception::~Exception(){}

string nsUtil::Exception::getmyLibelle() const
{

    return myLibelle;
}

unsigned nsUtil::Exception::getmyCodErr() const
{
    return myCodErr;
}

const char *nsUtil::Exception::what() const noexcept
{
    return myLibelle.c_str ();
}

void Exception::display()
{
    cout << "Exception : " << myLibelle << endl
         << "Code : " << myCodErr << endl;
}
