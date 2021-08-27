#include <stdio.h>

int main()
{
    char str1[100] = "Hello ", str2[100] = "World";
    char *s1 = str1;
    char *s2 = str2;

    // pointing to the end of the 1st string
    while(*s1)   // till it doesn't point to NULL-till string is not empty
    {
        s1++;    // point to the next letter of the string
    }
    while(*s2)   // till second string is not empty
    {
        *s1 = *s2;
        s2++;
        s1++;
    }
    *s1 = '\0';  // string must end with '\0'
    printf("\nThe string after concatenation is: %s ", str1);
    return 0;
}
