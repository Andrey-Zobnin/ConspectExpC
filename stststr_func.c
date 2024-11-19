#include <stdio.h>
char* strstr(const char* s, const char* sub_s);


char* strstr(const char* s, const char* sub_s) // возвращает указатель на начало подстроки
{
    int key = 0;
    char* p;
    // if - sos
    for (p = s; !key && *p;) 
    {
        unsigned i;
        for (i = 0; *(sub_s + i) && (*(p + i) == *(sub_s + i)); i++);
        if (!*(sub_s + i))
            key = 1;
        else
            p++;
    }
    return key ? p : NULL;
}
int main() 
{
    const char* str = "Hello, world!";
    const char* sub_str = "world";

    char* res = strstr(str, sub_str);
    if (res) 
    {
        printf("подстрока: %sn", res);
    }
    else 
    {
        printf("Подстрока не найдена");
    }

    return 0;
}