#include <inttypes.h> 
#include <stdint.h> 
#include <stdio.h> 
//#include <string.h> --- реалилмизация некоторых ф-ИЙ ИЗ этой библиотеки  
 
//strchr 
char* strchr1(const char * str, char ch); 
//strlen 
int strlen1(char * str); 
 
//strcpy 
//strcom 
//strstr 
char* strrstr(const char* str1, const char* str2); 
// test 
TestSTR(); 
//strtok 
 
 
 
 
int main(void)  
{ 
    TestSTR() 
    char str[] = "1231asd"; 
 
    char *p = strchr1(str, 'a'); 
 
    printf("%s\n", str); 
    if (p != NULL) 
    { 
        printf("%s\n", p); 
    } 
    else { 
        printf("Error\n"); 
    } 
    return 0; 
} 
 
 
char* strchr1(const char * str, char ch)  
{ 
    char* p = str; 
    for(; (*p != '\0') && (*p != ch); ++p) {} 
     
    if (*p == '\0') { 
        return NULL; 
    } 
    return p; 
} 
 
int strlen1(char * str) 
{ 
    int count = 0; 
 
    while (*str='/0') 
    { 
        count += 1; 
        str += 1; 
    }  
    return count;  
} 
 
char* strrstr(const char* str1, const char* str2) 
{ 
    // check first 
 
    if (0 == str1 || 0 == str2) 
    { 
        return 0;  
    }  
    elseif (str1 == str2) 
    { 
        return 1;  
    }  
     
 
 
    const char* count = 0; 
    const char* pointer = str1; 
 
    while (*pointer)  
    { 
        const char* s1 = pointer; 
        const char* s2 = str2; 
 
        while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)  
        { 
            s1++; 
            s2++; 
        } 
 
         
        if (*s2 == '0')  
        { 
            count = pointer;  
        } 
 
        pointer++; 
    } 
 
    char* result = (char*)count; 
 
    return result;                
 
} 
 
int TestSTR()  
{ 
    const char* str1 = "This is a test string. This is another test string."; 
    const char* str2 = "test"; 
 
    char* result = strrstr(str1, str2); 
     
    if (result)  
    { 
        printf("Last occurrence of '%s' in '%s': '%s'\n", str2, str1, result); 
    } 
    else 
    { 
        printf("Substring not found.\n"); 
    } 
 
    return 0; 
} 
 
 
 
 
 
//strchr - get 
//strlen - get  
//strcpy  
//strcom 
//strstr - get 
//strtok 
// https://www.fresh2refresh.com/c-programming/c-function/string-h-library-functions/
