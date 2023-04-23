#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    printf("Hello, world!\n");
    if (strcmp(argv[0], "/bin/bash") == 0)
        printf("You win!\n");
    return 0;
}