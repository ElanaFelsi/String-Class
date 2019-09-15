#include <iostream>
#include "testing.h"

void test()
{
    char word1[10] = "Hello ";
    char word2[10] = "World!!";
    MyString myString1(word1);
    MyString myString2(word2);
    MyString myString3;

    myString3 = myString1 + myString2;

    if (myString1 > myString2)
        std::cout << "Hello is bigger\n";
    else
        std::cout << "World is bigger\n";

    std::cout << myString3;
}