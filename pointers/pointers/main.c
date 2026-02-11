#include <stdio.h>

int main()
{
    int*    pInt;      // pointer to int
    double* pDouble;   // pointer to double

    printf(
      "Size of `int*` = %d, size of `double*` = %d\n",
      sizeof(pInt),
      sizeof(pDouble)
    );

    return 0;
}