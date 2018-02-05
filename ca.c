#include <stdio.h>
#include <string.h>
int main()
{
    char s[200];
    int count = 0, n;
 
    printf("enter the string\n");
    scanf("%s", n);
    for (i = 0;n[i] != '\0';i++)
    {
        if (n[i] == ' ')
            count++;    
    }
    printf("number of words in given string%d\n",count+1);
    return 0;
    }
