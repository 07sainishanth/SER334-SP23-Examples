
#include <stdio.h>

#define AREA_OF_TRIANGLE(b, h) (b*h)/2.0 

const int base = 3;
const int height = 5;
const float area = AREA_OF_TRIANGLE(base , height);
// area =. (base*height)/2.0


int main()
{
    printf("Hello World\n");

    printf("%f\n", area);

    return 0;
}