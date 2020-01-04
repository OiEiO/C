#include <stdio.h>

void a(char *s) {
    char b[20] = {"sdalvsdalvsdalvsdalv"};
    a(&b[5]);
}