#ifndef CLASS_STRING_MYSTRING_H
#define CLASS_STRING_MYSTRING_H

#include "strHelpFunc.h"
#include <ostream>

class MyString
{

public:
    MyString(const MyString &s);
    /* Dont need explicit, we would want to call ctor wt/o defining the string first */
    MyString(const char* s = NULL);
    ~MyString();

    MyString & operator=(const MyString &s);
    MyString & operator+(const MyString &s);
    MyString & operator+=(const MyString &s);

    friend std::ostream& operator<<(std::ostream& out, const MyString &s);

    char* getString() const;

private:
    char *m_str;
    void setString(const char* s);
    size_t getLength() const;

};


/* inline operators */
inline bool operator==(const MyString &s1, const MyString &s2)
{
    return my_strcmp(s1.getString(), s2.getString());
}
inline bool operator<(const MyString &s1, const MyString &s2)
{
    return my_strcmp(s1.getString(), s2.getString()) < 0;
}
inline bool operator>(const MyString &s1, const MyString &s2)
{
    return my_strcmp(s1.getString(), s2.getString()) > 0;
}
inline bool operator<=(const MyString &s1, const MyString &s2)
{
    return !(s1 > s2);
}
inline bool operator>=(const MyString &s1, const MyString &s2)
{
    return !(s1 < s2);
}
inline bool operator!=(const MyString &s1, const MyString &s2)
{
    return !(s1 == s2);
}

#endif //CLASS_STRING_MYSTRING_H
