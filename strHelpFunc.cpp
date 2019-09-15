#include "strHelpFunc.h"

size_t my_strlen(const char str[])
{
    const char *p = str;
    while (*p++);
    return (size_t)(p-str-1);
}

void my_strcpy(char *des, const char *src)
{
    while((*des++ = *src++));
}

void my_strcat(char dst[], const char src[])
{
    while (*dst++);
    --dst;
    //while (my_strcpy(dst,src));

}

int my_strcmp( const char s1[], const char s2[])
{
    while(*s1 && *s1++ == *s2++);
    return (*--s1 - *--s2);
}
