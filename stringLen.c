#include <stdio.h>

int main()
{
    int c=0;
    char s[100]= "HELLOWORLD@12345"; 
    char *p;
    p = &s[100];
    
    for(p = &s[0]; *p != '\0'; p++)
    {
        c = c+1;
    }
    
    printf("%d", c);

    return 0;
}
