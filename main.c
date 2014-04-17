/* main.c */
#include <stdio.h>

#include "askname.h"

int main(int argc, char **argv)
{
    char first[255], last[255];

    askname(first, last);

    printf("Goodbye, dear %s %s!\n", first, last);
    return 0;
}
