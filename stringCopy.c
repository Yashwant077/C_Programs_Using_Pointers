#include <stdio.h>

int main()
{
    char arr1[] = "Hello@World";
    int len = sizeof(arr1)/sizeof(arr1[0]) - 1;
    char arr2[len];
    char *ar1;
    ar1 = arr1;
    
    for(int i=0;i<len;i++)
    {
        arr2[i] = *ar1;
        *ar1++;
    }
    printf("%s",arr2);
    
    return 0;
}
