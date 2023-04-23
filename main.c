#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    argv[0] = "/bin/bash";
    printf("invoking target.exe with argv[0] = %s", argv[0]);
    execve("./target.exe", argv, 0);
    return 0;
}