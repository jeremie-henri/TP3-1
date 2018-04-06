#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <string>

namespace nsUtil
{
    class Exception : public std::exception
    {
    private:
        std::string myLibelle;
        unsigned myCodErr;
    public:
        Exception(std::string _myLibelle, unsigned _myCodErr);
        virtual ~Exception();
        std::string getmyLibelle() const;
        unsigned getmyCodErr() const;
        virtual const char* what() const noexcept;
        void display();
    };
}


#endif // EXCEPTION_H
