#include <float.h>
#include <stdio.h>
int main() {
    float flt = 1.0 / 3.0;
    double dbl = 1.0 / 3.0;

    printf("float               double\n");
    printf("%-20.6f%-20.6f\n", flt, dbl);
    printf("%-20.12f%-20.12f\n", flt, dbl);
    printf("%-20.16f%-20.16f\n", flt, dbl);
    printf("FLT_DIG: %d\n", FLT_DIG);
    printf("DBL_DIG: %d\n", DBL_DIG);

    return 0;
}
