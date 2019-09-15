#include <cstring>
#include "myString.h"
#include "strHelpFunc.h"

MyString::MyString(): str(NULL)
{

}

MyString::MyString(const MyString &m_str)
{
    if(!str)
        delete [] str;
    this->str = new char[my_strlen(m_str.str)+1];
    my_strcpy(this->str, m_str.str);

}

MyString::MyString(char *m_str)
{
    if (m_str)
    {
        if(!str)
            delete [] str;
        this->str = new char[my_strlen(m_str)+1];
        my_strcpy(this->str, m_str);
    }
    else
    {
        this->str = NULL;
    }
}

MyString::~MyString() {

}

MyString& MyString::operator=(const MyString &m_str)
{
    this->str = m_str.str;
    return *this;
}

MyString MyString::operator+(const MyString &m_str)
{
    strcat(this->str, m_str.str);
    return *this;
}

bool MyString::operator<(const MyString &m_str) const
{
    return my_strcmp(this->str, m_str.str) < 0;
}

bool MyString::operator>(const MyString &m_str) const
{
    return my_strcmp(this->str, m_str.str) > 0;
}

bool MyString::operator==(const MyString &m_str) const
{
    return !my_strcmp(this->str, m_str.str);
}

bool MyString::operator<=(const MyString &m_str) const
{
    return !(operator>(m_str));
}

bool MyString::operator>=(const MyString &m_str) const
{
    return !(operator<(m_str));
}

bool MyString::operator!=(const MyString &m_str) const
{
    return !(operator==(m_str));
}

size_t MyString::getLength() const {
    return  my_strlen(this->str);
}

std::ostream &operator<<(std::ostream &out, const MyString &m_str)
{
    return out<<m_str.str<<'\n';
}

void MyString::print() const {

}







