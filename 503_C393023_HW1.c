#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void myname(char name[30], char id[20])
{

    printf("Your Name is %s\n\n", name);
    printf("Your Student ID is %s\n", id);

}

int main()
{

    char name[30], id[20];

    printf("Please, type your English name & Student ID:");
    scanf("%[^,], %s", name, id);
    printf("\n");

    myname(name, id);

    return 0;

}
