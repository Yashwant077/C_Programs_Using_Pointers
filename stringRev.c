#include <stdio.h>

int main()
{
    char s[100]= "HELLOWORLD@12345"; 
    char *p;
    p = &s[100];
    
    for(*p = '\0'; p != &s[-1]; p--)
    {
        printf("%c", *p);
    }

    return 0;
}
