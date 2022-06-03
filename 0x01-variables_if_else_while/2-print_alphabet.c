#include <stdio.h>

int main()
{
    //1
    char ch;

    //2
    printf("Uppercase characters : \n");
    //3
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        printf("%c ", ch);
    }

    //4
    printf("\nLowercase characters : \n");
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c ", ch);
    }

    return 0;
}
