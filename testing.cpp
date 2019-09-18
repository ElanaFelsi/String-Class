#include <iostream>
#include "testing.h"

void test()
{
    MyString myString1("Hello");
    MyString myString2("World");
    MyString myString3;

    myString3 = myString1 + myString2;

    if (myString1 > myString2)
        std::cout << "Hello is bigger\n";
    else
        std::cout << "World is bigger\n";

    std::cout << myString3;
}
