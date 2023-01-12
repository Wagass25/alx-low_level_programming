#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar -rc liball.a *.o
ranlib liball.a#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar -rc liball.a *.o
ranlib liball.a
