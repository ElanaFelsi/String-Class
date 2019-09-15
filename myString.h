#ifndef CLASS_STRING_MYSTRING_H
#define CLASS_STRING_MYSTRING_H


#include <ostream>

class MyString
{
    char *str;

public:
    MyString();
    MyString(const MyString &m_str);
    MyString(char* m_str);

    ~MyString();

    MyString& operator=(const MyString &m_str);
    MyString operator+(const MyString &m_str);
    // operators
    bool operator==(const MyString &m_str) const;
    bool operator<(const MyString &m_str) const;
    bool operator>(const MyString &m_str) const;
    bool operator<=(const MyString &) const;
    bool operator>=(const MyString &m_str) const;
    bool operator!=(const MyString &m_str) const;

    friend std::ostream& operator<<(std::ostream& out, const MyString &m_str);

    size_t getLength() const;

    void print() const;  //do we need also print if we have overload for << ?

};


#endif //CLASS_STRING_MYSTRING_H
