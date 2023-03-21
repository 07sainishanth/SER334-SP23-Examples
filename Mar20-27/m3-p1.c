
#include <stdio.h>

#define AMOUNT_1 10
#define AMOUNT_2 23
#define DIFFERENCE (AMOUNT_2 - AMOUNT_1)

#if (DIFFERENCE > 0)
    #define OUTPUT 1
#else 
    #define OUTPUT 0
#endif

int main()
{
    printf("Hello World\n");

    printf("%d\n", OUTPUT);

    return 0;
}
