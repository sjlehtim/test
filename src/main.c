#include <stdio.h>
#include <stdint.h>

uint32_t square(uint32_t abc)
{
    return abc * abc;
}

int main(void)
{
    printf("Hello World!\n");

    printf(" * Square of 123 is %u\n", square(123));

    return 0;
}
