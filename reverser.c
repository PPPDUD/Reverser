#include <stdio.h>
#include <stdlib.h>
#define MAX 100
char buff_orp[MAX];


int main()
{
    printf("Welcome to the reverser!\n");
    while (0 == 0) {
        printf("\nWhat is your string? ");
        fgets(buff_orp, MAX, stdin);
        strrev(buff_orp);
        printf("\nHere's your string: %s\n", buff_orp);
        printf("\n");
        //printf(buff_orp);
    }

    return 0;
}
