#include <cstring>
#include "myString.h"
#include "strHelpFunc.h"


MyString::MyString(const MyString &s)
{
    if(!m_str)
        delete [] m_str;
    this->m_str = new char[my_strlen(s.m_str)+1];
    my_strcpy(this->m_str, s.m_str);

}

MyString::MyString(const char *s)
{
    if(s) {
        this->m_str = new char[my_strlen(s) + 1];
        my_strcpy(this->m_str, s);
    } else this->m_str = NULL;
}

MyString::~MyString()
{
    delete[] m_str;
    m_str = NULL;
}

MyString& MyString::operator=(const MyString &s)
{
    if(*this != s)
    {
        delete[] m_str;
        setString(s.getString());
    }
    return *this;
}

MyString& MyString::operator+(const MyString &s)
{
    //strcat(this->m_str, s.m_str);
    //return *this;
    char  *tmp = new char[my_strlen(m_str)+ my_strlen(s.m_str) +1];
    strcpy(tmp, m_str);
    MyString *pStrTemp = new MyString(tmp);
    return *pStrTemp;
}

MyString& MyString::operator+=(const MyString &s){
    //strcat(this->m_str, s.m_str);
    *this = *this + s;
    return *this;
}

char* MyString::getString() const
{
    return m_str;
}


size_t MyString::getLength() const {
    return  my_strlen(this->m_str);
}

std::ostream &operator<<(std::ostream &out, const MyString &s)
{
    return out<<s.m_str<<'\n';
}

void MyString::setString(const char *s)
{
    if(s)
    {
        if(m_str)
        {
            delete[] (m_str);
        }
        this->m_str = new char[my_strlen(s)+1];
        my_strcpy(this->m_str, s);
    } else this->m_str = NULL;
}





