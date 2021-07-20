#include <stdio.h>

int main()
{
    char s1[] = "HelloWorld@123";
    char s2[] = "HelloWorld#123"; 
    
    char *p1, *p2;
    int c = 0;
    
    p1 = s1;
    p2 = s2;
    
    while(*p1 != '\0' || *p2 != '\0')
    {
        if(*p1 != *p2)
        {
            c=1;
            break;
        }
        p1++;
        p2++;
    }
    
    if(c==0)
    {
        printf("Strings Matched");
    }
    else
        printf("Strings Not Matched");

    return 0;
}
