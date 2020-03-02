#include <stdio.h>

int main()
{
    int x = 4;
    int y = 6;
    int z;

    z = x && y;
    printf("z = %d\n", z);

    z = x & y;
    printf("z = %d\n", z);

    return 0;
}
