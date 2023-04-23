## Arbitrary ArgV

This is a PoC || GTFO for being able to set arbitrary argvs when starting
processes.

It originated from a CTF question that required a specific value for `argv[0]`,
which is usually the name of the invoked program.

`target.c` is the target program 
* `gcc -o target target.c`

`main.c` is the PoC
* `gcc -o main main.c`
