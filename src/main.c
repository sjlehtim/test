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
    printf(" * Square of 456 is %u\n", square(456));
    printf(" * Square of 789 is %u\n", square(789));    
    printf(" * Square of 1122 is %u\n", square(1122));

    return 0;
}
